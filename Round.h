//
// Created by awalt on 11/17/2026.
//

#ifndef TYCOON_ROUND_H
#define TYCOON_ROUND_H
#include <string>


class Round {
private:
    int m_roundCount;
    int m_scoreThisRound;
    std::string m_roleThisRound;
    bool m_roundOver;
    char m_choice;
public:
    Round();
    void takeTurn();
    int getScoreThisRound();
    void resetRoundOver();
    int getRoundCount();
    void resetCardChain();
    void checkForRevolution();
};


#endif //TYCOON_ROUND_H
