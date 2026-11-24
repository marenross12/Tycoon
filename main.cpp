#include "StartingMenu.h"

int main() {
    StartingMenu give_me_a_name;
    give_me_a_name.displayGameTitle();
    StartingMenu::displayMenuOptions();
    give_me_a_name.selectMenuOption();
    return 0;
}