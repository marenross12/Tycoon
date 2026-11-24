//
// Created by Mishael Garrett on 11/17/26.
//
#include<iostream>
#include "DeckOfCards.h"
#include <algorithm>

DeckOfCards::DeckOfCards() {
    //std::cout<<"CAN YOU HEAR ME  ZERO";
    std::vector<int> power = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    std::string son31 = "se mettre sur";
    for (int i = 0; i<power.size();i++) {
        for (int j = 0; j<4;j++) {
            switch (j) {
                case 0:
                    son31 = "Spades";
                    break;
                case 1:
                    son31 = "Hearts";
                    break;
                case 2:
                    son31 = "Clubs";
                    break;
                case 3:
                    son31 = "Diamonds";
                    break;
            }


                m_deck.emplace_back(Card (power.at(i),son31));


        }
    }

    m_deck.emplace_back(Card(0,"Arsene"));
    m_deck.emplace_back(Card(0,"Arsene"));


}

std::ostream& operator<<(std::ostream &os, DeckOfCards &d) {
for (int i = 0; i<d.m_deck.size();i++) {
    os<<d.m_deck.at(i);
    os<<std::endl;
}
    return os;
}

void DeckOfCards::Reversal4() {
    m_strengthReversal=!m_strengthReversal;
}

void DeckOfCards::shuffleDeck() {
    std::random_device srand;
    std::mt19937 gen(srand());


       std::shuffle(m_deck.begin(),m_deck.end(),gen);
}
