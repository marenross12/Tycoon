
//should we only make it so the game can play with one card at a time instead of many?
// need a getGameScore and a getCardName or something like that for playCard method
#ifndef PLAYER_PLAYER_H
#define PLAYER_PLAYER_H
#include <iostream>
#include <vector>
 //has to has access to card and deckOfCards and TycoonGame
class Player {
private:
    std::string m_playerName;
    std::string m_playerRole;
    std::vector <Card>m_playerHand;
public:
    Player() { //somewhere needs to ask for player name
    }
    ~Player() {
        std::cout << "Player object destroyed!!! MWWHAHAHAHAHAHA" << std::endl;
    }
    std::string getPlayerName() {
        return m_playerName;
    }
    std::vector <Card> getPlayerHand() {
        return m_playerHand;
    }
private:
    //should probably be in round class
    /*void dealCards(std::vector<Card>& deck) { //should take in a 52 card deck and store 13 cards in the players hand. should use a deckOfCards object??
        shuffleDeck(deck); //should store new shuffled deck into the vector for deck
        for (int i = 0; i < 13; ++i) {
            m_playerHand.push_back(deck[i]);
        }

    }*/
    /*static void checkForWinner() {// if we keep this here it needs to access a TycoonGame object. TycoonGame should have a players vector
        const TycoonGame *winner = nullptr;
        for (const auto &player : m_players) {
            if (player.getGameScore() >= 50 &&
                (winner == nullptr || player.getGameScore() > winner->getGameScore())) {
                winner = &player;
                }
        }
        if (winner != nullptr) {
            m_gameOver = true;
            std::cout << "\n\nCongratulations! " << winner->getPlayerName()
                      << " ,you win with a score of " << winner->getGameScore()
                      << "." << std::endl;
        }
     }*/
     void displayScoreBoard() { //clang wants this static
         for (int i = 0; i <  m_playerHand.size(); i++) {
            std::cout << m_playerHand.at(i).getPlayerName() <<
                " " << m_playerHand.at(i).getRole() <<
                " (Score: " << m_playerHand.at(i).getGameScore() << ")" << " | ";
        }
    }
public:
      void playCard(int cardIndex) { //why did clang have me make this static?
        //check that the cardIndex is valid and in range
        if (cardIndex >= 0 && cardIndex < m_playerHand.size()) {
            //displays card at given index
            std::cout << m_playerHand[cardIndex].getCardName() << std::endl;
            //should remove card from hand
            m_playerHand.erase(m_playerHand.begin() + cardIndex); //have to start at the beginning of the vector and have it count to what one you want to erase
        }
        else {
            std::cout << "Invalid card index" << std::endl;
        }


    }
    void setRole(std::string role) {
        m_playerRole = role;
    }
    std::string getRole() {
        return m_playerRole;
    }
    void fillHand(Card a) {
        m_playerHand.push_back(a);
    }
};



#endif //PLAYER_PLAYER_H
