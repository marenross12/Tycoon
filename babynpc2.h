
#ifndef PLAYER_BABYNPC2_H
#define PLAYER_BABYNPC2_H
#include "npc.h"
#include <random>

class BabyNPC2 : public NPC {

public:
    void speak() override {
        std::vector<std::string> lines = {"Hello", "Hi", "How are you?", "I'm not evil at all"};
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, lines.size() - 1);
        int index = dis(gen);
        std::cout << lines[index] << std::endl;

    }
    std::vector <Card> getNPCHand() override {
        return m_npcHand;
    }
};

#endif //PLAYER_BABYNPC2_H
