#include "STORAGE_INTERFACE.h"
#include <iostream>
#include <vector>

using namespace std;

STORAGE_INTERFACE::STORAGE_INTERFACE() {
	cout << "database created" << endl;
}

STORAGE_INTERFACE::~STORAGE_INTERFACE() {
	cout << "database deleted" << endl;
}

void STORAGE_INTERFACE::create_new_todo_item(std::string name, int creation_date, int due_date, std::string information) {
	cout << "new item created" << endl;
	
	TODO_ITEM new_item = TODO_ITEM(name, creation_date, due_date, information);
	todo_items.push_back(new_item);
}