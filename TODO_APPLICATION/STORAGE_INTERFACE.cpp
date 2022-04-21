#include <iostream>
#include <string>
#include <vector>
#include "STORAGE_INTERFACE.h"
#include "DATE.h"
#include "UTILITIES.h"

using namespace std;

void print_month(int);
DATE get_due_date();

void STORAGE_INTERFACE::test() {
	DATE creation_date = DATE();
	TODO_ITEM new_item = TODO_ITEM();
	new_item.create_item("Grant", creation_date, creation_date, "Information");
	todo_items.push_back(new_item);
}

STORAGE_INTERFACE::STORAGE_INTERFACE() {
	//cout << "database created" << endl;
}

STORAGE_INTERFACE::~STORAGE_INTERFACE() {
	//cout << "database deleted" << endl;
}

void STORAGE_INTERFACE::create_new_todo_item() {
	TODO_ITEM new_item = TODO_ITEM();
	DATE creation_date = DATE();
	DATE due_date = get_due_date();
	string name, information;
	cout << "Please enter a name for your todo item: ";
	getline(cin, name);
	cout << "Please enter a description for your todo item: ";
	getline(cin, information);
	new_item.create_item(name, creation_date, due_date, information);
	todo_items.push_back(new_item);
}

DATE get_due_date() {
	int day, month, year;
	string cache;
	while (true) {
		cout << "Please enter a day between 1 - 31: ";
		getline(cin, cache);
		if ((is_number(cache)) && (stoi(cache) > 0) && (stoi(cache) < 32)) {
			day = stoi(cache);
			break;
		}
		else {
			cout << "Invalid input. ";
		}
	}
	while (true) {
		cout << "Please enter a month between 1 - 12: ";
		getline(cin, cache);
		if ((is_number(cache)) && (stoi(cache) > 0) && (stoi(cache) < 13)) {
			month = stoi(cache);
			break;
		}
		else {
			cout << "Invalid input. ";
		}
	}
	while (true) {
		cout << "Please enter a year greater than 1970: ";
		getline(cin, cache);
		if ((is_number(cache)) && (stoi(cache) > 1970)) {
			year = stoi(cache);
			break;
		}
		else {
			cout << "Invalid input. ";
		}
	}
	DATE due_date = DATE(day, month, year);
	return due_date;
	
}

void STORAGE_INTERFACE::print_list() {
	cout << "Here are your todo tasks:" << endl << endl;
	int counter = 0;
	for (TODO_ITEM& item : todo_items) {
		counter++;
		cout << "Task " << counter << ":" << endl;
		int int_cache;
		string str_cache, str_cachet;
		DATE date_cache;
		bool bool_cache;
		str_cache = item.get_title();
		cout << "Title: " << "\t\t";
		cout << str_cache << endl;
		date_cache = item.get_creation_date();
		cout << "Created on: " << '\t';
		int_cache = date_cache.get_month();
		print_month(int_cache);
		str_cache = to_string(date_cache.get_day());
		cout << " " << str_cache << ", ";
		str_cache = to_string(date_cache.get_year());
		cout << str_cache << endl;
		date_cache = item.get_due_date();
		cout << "Due date: " << '\t';
		print_month(int_cache);
		str_cache = to_string(date_cache.get_day());
		cout << " " << str_cache << ", ";
		str_cache = to_string(date_cache.get_year());
		cout << str_cache << endl;
		str_cachet = item.get_information();
		cout << "Description: " << '\t';
		cout << str_cachet << endl;
		bool_cache = item.get_complete();
		cout << "Status: " << '\t';
		switch (bool_cache)
		{
		case true:
			cout << "Complete" << endl;
			break;
		case false:
			cout << "Incomplete" << endl;
			break;
		}
		cout << endl;
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