#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class List {
private:// Attibutes
	vector<string> data;
	vector<bool> check;
	int count = 0;
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
	void deleteToDo(string);
	void doneToDo(string);
};