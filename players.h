
#ifndef PLAYER_PLAYER_H
#define PLAYER_PLAYER_H
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
        std::cout << "Player object destroyed!!! MWWHAHAHAHAHAHA" << std::endl;
    }
    std::string getPlayerName() {
        return m_playerName;
    }
    std::vector <Card> getPlayerHand() {
        return m_playerHand;
    }
private:
    //should probably be in round class
    /*void dealCards(std::vector<Card>& deck) { //should take in a 52 card deck and store 13 cards in the players hand. should use a deckOfCards object??
        shuffleDeck(deck); //should store new shuffled deck into the vector for deck
        for (int i = 0; i < 13; ++i) {
            m_playerHand.push_back(deck[i]);
        }

    }*/

public:
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



#endif //PLAYER_PLAYER_H
