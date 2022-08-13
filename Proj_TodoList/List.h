#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class List {
private:// Attibutes
	vector<string> data;
	vector<bool> check;
public: // Constructor - Destructor
	List();
	List(vector<string>);

public: // Getter - Setter
	void setData(vector<string>);
	vector<string> getData();

	void setCheck(vector<bool>);
	vector<bool> getCheck();

public: // Method
	void init();
	void showList();
	void addToDo(string);
	void doneToDo(int);
	void deleteToDo(int);
	int getSize();
};