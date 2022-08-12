#include <iostream>
#include "Menu.h"

using namespace std;

void showMenu() {
    cout << "\x1B[2J\x1B[H";
    cout << "==========================================\n";
    cout << "|              MENU                      |\n";
    cout << "| Please make your selection             |\n";
    cout << "| 1 - Show your to do list               |\n";
    cout << "| 2 - Add the work you to do             |\n";
    cout << "| 3 - Mark the work you've done          |\n";
    cout << "| 4 - Delete the work you want ignore    |\n";
    cout << "| 5 - Exit                               |\n";
    cout << "==========================================\n";
}