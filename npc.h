//abstract class
#ifndef PLAYER_NPC_H
#define PLAYER_NPC_H
#include "players.h"
#include <iostream>
#include <string>
#include <vector>

class NPC : public Players {
protected:
    std::string m_npcName;
    std::string m_npcRole;
    std::vector <Card> m_npcHand;
public:
    NPC() {
        m_npcRole = "Commoner";

    }
    ~NPC() override {
        std::cout << "\nNPC object destroyed!!!! EVIL NPC DEFEATED!!!" << std::endl;
    }

    std::string getNPCName() {return m_npcName;}
    virtual std::vector <Card> getNPCHand() {
        return m_npcHand;
    }

    std::string getNPCRole() {return m_npcRole;}
    virtual void speak()=0;
    void setNPCRole(const std::string &npcRole) {
        m_npcRole = npcRole;
    }


};
#endif //PLAYER_NPC_H
