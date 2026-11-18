#ifndef TYCOON_TYCOONGAME_H
#define TYCOON_TYCOONGAME_H
#include "Round.h"


class TycoonGame {
protected:
    Round m_gameRound;
    bool m_gameOver;
    int m_finalScore;
    int m_gameDifficulty;
public:
    TycoonGame();
    int getFinalScore() const;
    void displayTycoonRules();
    void playGame();
};


#endif //TYCOON_TYCOONGAME_H
