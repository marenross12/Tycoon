
#ifndef PLAYER_PLAYERS_H
#define PLAYER_PLAYERS_H
#include <iostream>
#include <vector>
#include "Card.h"

class Players {
private:
    std::string m_playerName;
    std::string m_playerRole;

    std::vector <Card>m_playerHand;
public:
    Players() {
        m_playerRole = "Commoner";
        m_playerName = "Joker";
    }

    virtual ~Players() {
        std::cout << "\nPlayer object destroyed!!! MWWHAHAHAHAHAHA" << std::endl;
    }
    std::string getPlayerName() {
        return m_playerName;
    }
    std::vector <Card> getPlayerHand() {
        for (int i = 0; i < m_playerHand.size(); i++) {
            if (i % 2 == 0) {
                std::cout<<std::endl;
            }
            std::cout << m_playerHand[i] << ", ";
        }
        std::cout << std::endl;
        return m_playerHand;
    }

      void playCard(int cardIndex) { //why did clang have me make this static?
        //check that the cardIndex is valid and in range
        if (cardIndex >= 0 && cardIndex < m_playerHand.size()) {
            //displays card at given index
            std::cout << m_playerHand[cardIndex] << std::endl;
            //should remove card from hand
            m_playerHand.erase(m_playerHand.begin() + cardIndex); //have to start at the beginning of the vector and have it count to what one you want to erase
        }
        else {
            std::cout << "Invalid card index" << std::endl;
        }


    }
    void setRole(const std::string &role) {
        m_playerRole = role;
    }
    std::string getRole() {
        return m_playerRole;
    }
    void fillHand(const Card &a) {
        m_playerHand.push_back(a);
    }
};



#endif //PLAYER_PLAYERS_H
