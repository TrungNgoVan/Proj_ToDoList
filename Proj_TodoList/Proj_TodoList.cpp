#include "Header.h"
#include "List.h"
#include "Menu.h"
using namespace std;

int main() {
	List listToDo;
    int choice;
    string temp;
    do {
        showMenu();
        cout << "Selection: ";
        cin >> choice;
        cin.ignore();
        //if (choice > 1 && choice < 5) listToDo.showList();
        switch (choice) {
        case 1:
            listToDo.showList();
            break;
        case 2:
            cout << "\x1B[2J\x1B[H";
            listToDo.showList();
            cout << "Enter the work you to do: ";
            getline(cin, temp);
            listToDo.addToDo(temp);
            break;
        case 3:
            cout << "\x1B[2J\x1B[H";
            listToDo.showList();
            cout << "Enter the work you've done: ";
            getline(cin, temp);
            listToDo.doneToDo(temp);
            break;
        case 4:
            cout << "\x1B[2J\x1B[H";
            listToDo.showList();
            cout << "Enter the work you want ignore: ";
            getline(cin, temp);
            listToDo.deleteToDo(temp);
            break;
        case 5:
            return 0;
            break;
        default:
            cout << "\x1B[2J\x1B[H";
            cout << "Your selection is not valid, Please choose again!\n";
            showMenu();
            cout << "Selection: ";
            cin >> choice;
            cin.ignore();
        }
    } while (choice != 5);
	return 0;
}