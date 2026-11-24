//
// Created by Mishael Garrett on 11/17/26.
//

#ifndef TYCOON_DECKOFCARDS_H
#define TYCOON_DECKOFCARDS_H
#include <random>
#include<vector>
#include"Card.h"
#include"player.h"
#include"npc.h"
class DeckOfCards {
private:
    bool m_strengthReversal=false;
    std::vector<Card> m_deck;
public:
    DeckOfCards();//For some reason, it only uses this instantiation if it is parametric.
    void shuffleDeck();
    void distribute(Player &P, NPC &N, NPC &C, NPC &Rob, int size);
    void Deal(Player & P, NPC & N, NPC & C, NPC & Craig);
    void Reversal4();//I'd have called it "4Reversal", but its name can't start with a number.
    friend std::ostream& operator<<(std::ostream &os, DeckOfCards &d);
};


#endif //TYCOON_DECKOFCARDS_H
