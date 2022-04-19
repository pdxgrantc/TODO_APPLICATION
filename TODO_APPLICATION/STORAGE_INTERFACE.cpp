#include "STORAGE_INTERFACE.h"
#include "DATE.h"
#include <iostream>
#include <vector>

using namespace std;

STORAGE_INTERFACE::STORAGE_INTERFACE() {
	cout << "database created" << endl;
}

STORAGE_INTERFACE::~STORAGE_INTERFACE() {
	cout << "database deleted" << endl;
}

void STORAGE_INTERFACE::create_new_todo_item(std::string name, DATE due_date, std::string information) {
	cout << "new item created" << endl;
	DATE creation_date = DATE();
	TODO_ITEM new_item = TODO_ITEM();
	new_item.create_item(name, creation_date, due_date, information);
	todo_items.push_back(new_item);
}

void STORAGE_INTERFACE::print_list() {}