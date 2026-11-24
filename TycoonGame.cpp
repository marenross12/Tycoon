#include "TycoonGame.h"

#include <iostream>

TycoonGame::TycoonGame() {
    m_gameOver = false;
    m_finalScore = 0;
}

void TycoonGame::playGame() {
    while (!m_gameOver) {
        m_gameRound.takeTurn();
        m_finalScore += m_gameRound.getScoreThisRound();
        if (m_gameRound.getRoundCount() >= 3) {
            m_gameOver = true;
        }
        else {
            m_gameRound.resetRoundOver();
        }
    }
    std::cout << "\nGame Over!" << std::endl;
}

int TycoonGame::getFinalScore() const {
    return m_finalScore;
}

void TycoonGame::displayTycoonRules() {
    std::cout << "MAIN RULES - Learn the Basics Here, Joker!" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "1. Four players are dealt 13 randomly shuffled cards each, with two joker cards in play, so two random players will have 14 in a hand." << std::endl;
    std::cout << "2. Everyone is a Commoner at the start of Round 1, and whoever has the 2 of Hearts card reveals it and starts the first hand." << std::endl;
    std::cout << "3. You may play 1-4 cards of the same value, going around clockwise until only one person has cards left in hand." << std::endl;
    std::cout << "4. You must play down a card stronger than the one the previous player played, or you can pass." << std::endl;
    std::cout << "5. If everyone passes, then the person who played the previous card wins the hand and starts the next card chain." << std::endl;
    std::cout << "6. The first person to get out becomes the Tycoon next round, followed by the 2nd (Rich), 3rd (Poor), and dead last as the Beggar." << std::endl;
    std::cout << "7. Tycoon gets 30 pts at the end of the round, Rich gets 20 pts, Poor gets 10 pts, and Beggar gets 0 pts. After 3 rounds, whoever has the most pts wins!" << std::endl;

    std::cout << "\nSPECIAL CARDS & ROLES - A way to spice up the game!" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "3-of-Spades : Trumps the Joker card when it is the sole card at the top of a card chain." << std::endl;
    std::cout << "8-Stop : Skips everyone's turns and clears the card chain, giving you can extra turn." << std::endl;
    std::cout << "Revolution : Reverses the card strength when you play down 4 cards of the same number." << std::endl;
    std::cout << "\nCommoner : The starting role of the first round; does nothing." << std::endl;
    std::cout << "Tycoon : Trades two cards of their choosing with the Beggar at the start of the round. They must get out first or risk going Bankrupt, meaning they automatically become the Beggar next round." << std::endl;
    std::cout << "Rich : Trades one card of their choosing with the Poor at the start of the round." << std::endl;
    std::cout << "Poor : Trades their best card with the Rich at the start of the round." << std::endl;
    std::cout << "Beggar : Trades two of their best cards with the Tycoon at the start of the round." << std::endl;
}

