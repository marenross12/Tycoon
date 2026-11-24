
#ifndef PLAYER_BABYNPC1_H
#define PLAYER_BABYNPC1_H
#include "npc.h"
#include <vector>
#include <string>
#include <random>

class BabyNPC1 : public NPC {
private:
    std::string m_line;
    std::vector<std::string> lines = {"I am Baby NPC 1.", "Please don't hurt me", "I must win this game", "You will never win!", "I am evil!!"};
public:
    void speak() override {
        //set line to a random element from lines
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> dis(0, lines.size() - 1);
        m_line = lines[dis(gen)];
        std::cout << m_line << std::endl;
    }
    ~BabyNPC1() override {
        std::cout << "Baby NPC 1 object destroyed!!!" << std::endl;
    }
};

#endif //PLAYER_BABYNPC1_H
