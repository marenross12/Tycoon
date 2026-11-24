#ifndef TYCOON_STARTINGMENU_H
#define TYCOON_STARTINGMENU_H
#include <string>
#include "TycoonGame.h"

class StartingMenu {
private:
    std::string m_gameTitle;
    TycoonGame m_tycoon;
    int m_menuChoice;
    char m_gameDifficulty;
public:
    StartingMenu();
//private:
    void displayGameTitle() const;
    static void displayMenuOptions();
    void selectMenuOption();
};


#endif //TYCOON_STARTINGMENU_H
