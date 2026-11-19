
#ifndef PLAYER_NPC_H
#define PLAYER_NPC_H
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include "Player.h"
class NPC {
private:
    std::string m_npcName;
    std::string m_npcRole;
    std::vector <Card> m_npcHand;
public:
    NPC(){}
    ~NPC() {
        std::cout << "NPC object destroyed" << std::endl;
    }
    std::string getNPCName() {
        return m_npcName;
    }
    std::vector <Card> getNPCHand() {
        return m_npcHand;
    }
private:
    void checkForWinner(){}
public:
    void playCard() {
        //same as player playCard function
    }
    void setRole(std::string npcRole) {
        m_npcRole = npcRole;
    }


};
#endif //PLAYER_NPC_H
