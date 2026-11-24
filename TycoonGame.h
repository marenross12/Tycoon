#ifndef TYCOON_TYCOONGAME_H
#define TYCOON_TYCOONGAME_H
#include "Round.h"

class StartingMenu;

class TycoonGame {
private:
    Round m_gameRound;
    bool m_gameOver;
    int m_finalScore;
public:
    TycoonGame();
    int getFinalScore() const;
    static void displayTycoonRules();
    void playGame();
};


#endif //TYCOON_TYCOONGAME_H
