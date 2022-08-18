#include "Header.h"
#include "List.h"

using namespace std;
HANDLE hConsole;
//Constructor - Destructor
List::List() {
	this->data = {};
}

List::List(vector<string> listToDo) {
	this->data = listToDo;
}

List::~List() {
	// Do nothing
}

//Getter - Setter
void List::setData(vector<string> list) {
	this->data = list;
}

vector<string> List::getData() {
	return this->data;
}

void List::setCheck(vector<bool> list) {
	this->check = list;
}

vector<bool> List::getCheck() {
	return this->check;
}

//Method
void List::init() {
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
}

void List::showList() {
	cout << "\x1B[2J\x1B[H";
	cout << "=== TO DO LIST ===\n\n";
	/*for (int i = 0; i < this->getSize() ; i++) {
		cout << i + 1 << ": " << this->data[i];
		if (this->check[i]) cout << setw(15) << " (Done)\n";
		else cout << "\n";
	}*/
	for (int i = 0; i < this->getSize(); i++) {
		if (this->check[i]) {
			SetConsoleTextAttribute(hConsole, 10);
			cout << i + 1 << ": " << this->data[i];
		}
		else {
			SetConsoleTextAttribute(hConsole, 15);
			cout << i + 1 << ": " << this->data[i];
		}
    SetConsoleTextAttribute(hConsole, 15);
		cout << "\n";
	}
	cout << "\n";
	system("pause");
}

void List::addToDo(string toDo) {
	this->data.push_back(toDo);		
	this->check.push_back(false);
}

void List::doneToDo(int idx) {
	if (idx < 1 || idx > this->getSize())
	{
		cout << "You don't have this work on your to do list yet!\n";
		system("pause");
	}
	else {
		this->check[idx - 1] = true;
	}
}

void List::deleteToDo(int idx) {
	
	if (idx < 1 || idx > this->getSize())
	{
		cout << "You don't have this work on your to do list yet!\n";
		system("pause");
	}
	else {
		vector<string>::iterator tmp1 = this->data.begin() + idx - 1;
		data.erase(tmp1);
		vector<bool>::iterator tmp2 = this->check.begin() + idx - 1;
		check.erase(tmp2);
	}
}

int List::getSize() {
	return this->data.size();
}

