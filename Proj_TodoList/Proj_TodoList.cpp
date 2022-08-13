#include "Header.h"
#include "List.h"
#include "Menu.h"
using namespace std;

int main() {
	List listToDo;
    int choice, buffer;
    string temp;
    do {
        showMenu();
        cout << "Selection: ";
        cin >> choice;
        cin.ignore();
        if (choice > 1 && choice < 5) {
            if (listToDo.getSize() != 0) {
                listToDo.showList();
            }
            else {
                cout << "You don't have any work to do!!!\n";
                system("pause");
            }
        }
        switch (choice) {
        case 1:
            if (listToDo.getSize() != 0) {
                listToDo.showList();
            }
            else {
                cout << "You don't have any work to do!!!\n";
                system("pause");
            }
            break;

        case 2:
            cout << "Enter the work you to do: ";
            getline(cin, temp);
            listToDo.addToDo(temp);
            break;

        case 3:
            if (listToDo.getSize() != 0) {
                cout << "Enter index of the work you've done: ";
                getline(cin, temp);
                buffer = stoi(temp);
                listToDo.doneToDo(buffer);
            }
            else {
                cout << "You don't have any work to do!!!\n";
                system("pause");
            }
            break;

        case 4:
            if (listToDo.getSize() != 0) {
                cout << "Enter index of the work you want ignore: ";
                getline(cin, temp);
                buffer = stoi(temp);
                listToDo.deleteToDo(buffer);
            }
            else {
                cout << "You don't have any work to do!!!\n";
                system("pause");
            }
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
