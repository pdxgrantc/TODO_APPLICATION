#include <iostream>
#include <string>
#include "STORAGE_INTERFACE.h"
#include "APPLICATION.h"

STORAGE_INTERFACE* create_db();
void delete_ptrs(STORAGE_INTERFACE* db);
int take_top_choice_input();
bool is_number(std::string input);

APPLICATION::APPLICATION() {
	db = create_db();

    int top_choice = take_top_choice_input();
    main_driver(top_choice);

    delete_ptrs(db);
}

void APPLICATION::main_driver(int top_choice) {
    switch (top_choice)
    {
    case 1:
        print_list();
    case 2:
        create_new_todo();
    case 3:
        edit_item();
    case 4:
        mark_complete();
    case 5:
        delete_item();
    case 6:
        save_and_quit();
    default:
        break;
    }
}

void APPLICATION::print_list() {
    db->print_list();
}

void APPLICATION::create_new_todo() {
    DATE due_date;
    std::string title, information;
    db->create_new_todo_item(title, due_date, information);
}

void APPLICATION::edit_item() {}

void APPLICATION::mark_complete() {}

void APPLICATION::delete_item() {}

void APPLICATION::save_and_quit() {}

int take_top_choice_input() {
    std::cout << "Please choose an option below:" << std::endl;
    std::cout << "1. Print TODO Items" << std::endl;
    std::cout << "2. Create new todo item" << std::endl;
    std::cout << "3. Edit item" << std::endl;
    std::cout << "4. Mark item complete" << std::endl;
    std::cout << "5. Delete an Item" << std::endl;
    std::cout << "6. Save and Quit" << std::endl;
    std::cout << "Enter a number here: ";
    std::string str;
    int input = 6;
    std::cin >> str;
    while (true) {
        if ((is_number(str)) && (stoi(str) > 0) && (stoi(str) < 7)) {
            input = stoi(str);
            break;
        }
        else {
            std::cout << "please enter a integer relating to a list item." << std::endl;
        }
    }
    return input;
}

bool is_number(std::string input) {
    for (int i = 0; i < input.length(); i++) {
        if (isdigit(input[i]) == false) {
            return false;
        }
    }
    return true;
}

STORAGE_INTERFACE* create_db()
{
    STORAGE_INTERFACE* db = new STORAGE_INTERFACE;
    return db;
}

void delete_ptrs(STORAGE_INTERFACE* db) {
    delete db;
}