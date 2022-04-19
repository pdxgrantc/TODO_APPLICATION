#include "STORAGE_INTERFACE.h"
#include "DATE.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_month(int);

STORAGE_INTERFACE::STORAGE_INTERFACE() {
	//cout << "database created" << endl;
}

STORAGE_INTERFACE::~STORAGE_INTERFACE() {
	//cout << "database deleted" << endl;
}

void STORAGE_INTERFACE::create_new_todo_item(std::string name, DATE due_date, std::string information) {
	cout << "new item created" << endl;
	DATE creation_date = DATE();
	TODO_ITEM new_item = TODO_ITEM();
	new_item.create_item(name, creation_date, due_date, information);
	todo_items.push_back(new_item);
}

void STORAGE_INTERFACE::print_list() {
	for (TODO_ITEM& item : todo_items) {
		int int_cache;
		string str_cache;
		DATE date_cache;
		bool bool_cache;
		str_cache = item.get_title();
		cout << str_cache << endl;
		date_cache = item.get_creation_date();
		cout << "Created on: ";
		int_cache = date_cache.get_month();
		print_month(int_cache);
		str_cache = to_string(date_cache.get_day());
		cout << " " << str_cache << ", ";
		str_cache = to_string(date_cache.get_year());
		cout << str_cache << endl;
		date_cache = item.get_due_date();
		cout << "Due date: ";
		print_month(int_cache);
		str_cache = to_string(date_cache.get_day());
		cout << " " << str_cache << ", ";
		str_cache = to_string(date_cache.get_year());
		cout << str_cache << endl;
		str_cache = item.get_information();
		cout << str_cache << endl;
		bool_cache = item.get_complete();
		switch (bool_cache)
		{
		case true:
			cout << "Complete" << endl;
			break;
		case false:
			cout << "Incomplete" << endl;
			break;
		default:
			break;
		}
	}
}

void print_month(int month) {
	switch (month)
	{
	case 1:
		cout << "Jauary";
		break;
	case 2:
		cout << "February";
		break;
	case 3:
		cout << "March";
		break;
	case 4:
		cout << "April";
		break;
	case 5:
		cout << "May";
		break;
	case 6:
		cout << "June";
		break;
	case 7:
		cout << "July";
		break;
	case 8:
		cout << "August";
		break;
	case 9:
		cout << "September";
		break;
	case 10:
		cout << "October";
		break;
	case 11:
		cout << "November";
		break;
	case 12:
		cout << "December";
		break;
	default:
		break;
	}
}