//
// Created by Maren Ross on 11/17/26.
//

#ifndef PLAYER_PLAYER_H
#define PLAYER_PLAYER_H
#include <iostream>
#include <vector>
#include "Card.h"
class Player {
private:
    std::string m_playerName;
    std::string m_playerRole;
    std::vector <Card>m_playerHand;
public:
    Player(){}
    ~Player() {
        std::cout << "Player object destroyed" << std::endl;
    }
    std::string getPlayerName() {
        return m_playerName;
    }
    std::vector <Card> getPlayerHand() {
        return m_playerHand;
    }
private:
    void checkForWinner() {
        const TycoonGame *winner = nullptr;
        for (const auto &player : m_players) {
            if (player.getGameScore() >= 50 &&
                (winner == nullptr || player.getGameScore() > winner->getGameScore())) {
                winner = &player;
                }
        }
        if (winner != nullptr) {
            m_gameOver = true;
            std::cout << "\n\nCongratulations! " << winner->getPlayerName()
                      << " ,you win with a score of " << winner->getGameScore()
                      << "." << std::endl;
        }
    }
    void displayScoreBoard() {
        for (int i = 0; i <  m_playerHand.size(); i++) {
            std::cout << m_playerHand.at(i).getPlayerName() << " (Score: " << m_playerHand.at(i).getGameScore() << ")" << " | ";
        }
    }
public:
    void playCard(int cardIndex) {
        //check that the cardIndex is valid and in range
        if (cardIndex >= 0 && cardIndex < m_playerHand.size()) {
            //displays card at given index
            std::cout << m_playerHand[cardIndex].getCardName() << std::endl;
            //should remove card from hand
            m_playerHand.erase(cardIndex);
        }
        else {
            std::cout << "Invalid card index" << std::endl;
        }


    }
    void setRole(std::string role) {
        m_playerRole = role;
    }
    std::string getRole() {
        return m_playerRole;
    }
};



#endif //PLAYER_PLAYER_H
