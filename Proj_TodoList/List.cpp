#include "Header.h"
#include "List.h"

using namespace std;
//Constructor - Destructor
List::List() {
	this->data = {};
}

List::List(vector<string> listToDo) {
	this->data = listToDo;
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
	cout << "To do list by nvtrung" << endl;
}

void List::showList() {
	cout << "=== TO DO LIST by nvtrung ===\n";
	if (this->data.size() != 0) {
		cout << "\x1B[2J\x1B[H";
		for (int i = 0; i < this->count; i++) {
			cout << i + 1 << ": " << this->data[i];
			if (this->check[i]) cout << " (Done)\n";
			else cout << "\n";
		}
	}
	else {
		cout << "\x1B[2J\x1B[H";
		cout << "You don't have any work to do" << endl;
	}
	system("pause");
}

void List::addToDo(string toDo) {
	this->data.push_back(toDo);
	this->check.push_back(false);
	this->count++;
}

void List::deleteToDo(string toDo) {
	int idx = -1;
	for (int i = 0; i < this->count; i++) {
		if (this->data[i] == toDo) idx = i;
	}
	if (idx == -1) 
		cout << "You don't have this work on your to do list yet!\n";
	else {
		for (int i = idx; i < this->count - 1; i++) {
			this->data[i] = this->data[i + 1];
			this->check[i] = this->check[i + 1];
			this->data.pop_back();
			this->check.pop_back();
			count--;
		}
	}
}

void List::doneToDo(string toDo) {
	for (int i = 0; i < this->count; i++) {
		if (this->data[i] == toDo) {
			this->check[i] = true;
		}
	}
}


