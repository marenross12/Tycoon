#include "StartingMenu.h"

#include <iostream>
#include <ostream>
#include "TycoonGame.h"

StartingMenu::StartingMenu() {
    m_gameTitle = "THIEVES DEN TYCOON!";
    m_menuChoice = 0;
    m_gameDifficulty = 't';
}

void StartingMenu::displayGameTitle() const {
    std::cout << m_gameTitle << std::endl << std::endl;
}

void StartingMenu::displayMenuOptions() {
    std::cout << "Pick an Option:" << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << "1. Play Game\n"
    << "2. Read Rules\n"
    << "3. Select Difficulty\n" << std::endl;
    std::cin >> m_menuChoice;
}

void StartingMenu::selectMenuOption() {
    if (m_menuChoice == 1) {
        std::system("clear");
        m_tycoon.playGame();
    }
    else if (m_menuChoice == 2) {
        std::system("clear");
        m_tycoon.displayTycoonRules();
        std::cout << "\nType 0 to Return to Main Menu: ";
        std::cin >> m_menuChoice;
        if (m_menuChoice == 0) {
            std::system("clear");
            displayMenuOptions();
        }
    }
    else if (m_menuChoice == 3) {
        std::system("clear");
        std::cout << "Choose a Difficulty:" << std::endl;
        std::cout << "--------------------" << std::endl;
        std::cout << "Easy (e)\n"
        << "Medium (m)\n"
        << "Hard (h)\n" << std::endl;
        std::cin >> m_gameDifficulty;
        std::system("clear");
        displayMenuOptions();
    }
}
