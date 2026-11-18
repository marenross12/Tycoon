#ifndef TYCOON_STARTINGMENU_H
#define TYCOON_STARTINGMENU_H
#include <string>
#include "TycoonGame.h"

class StartingMenu {
private:
    std::string m_gameTitle;
    TycoonGame m_tycoon;
    int m_menuChoice;
public:
    StartingMenu();
private:
    void displayGameTitle();
    void displayMenuOptions();
};


#endif //TYCOON_STARTINGMENU_H
