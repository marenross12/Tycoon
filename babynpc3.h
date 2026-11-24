
#ifndef PLAYER_BABYNPC3_H
#define PLAYER_BABYNPC3_H
#include "npc.h"
#include <random>
#include <vector>
#include <iostream>

class BabyNPC3 : public NPC {
public:
    void speak() override {
        std::vector<std::string> lines = {"You can't trust them", "I'm not paranoid", "He's lying HE IS EVIL", "You're going to lose"};
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, lines.size() - 1);
        int index = dis(gen);
        std::cout << lines[index] << std::endl;
    }
};

#endif //PLAYER_BABYNPC3_H
