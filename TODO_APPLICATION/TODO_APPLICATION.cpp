// TODO_APPLICATION.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "STORAGE_INTERFACE.h"

STORAGE_INTERFACE* create_db();
void delete_ptrs(STORAGE_INTERFACE* db);


int main()
{
    std::cout << "Hello World!\n";
    STORAGE_INTERFACE* db = create_db();

    int top_choice = take_top_choice_input();

    delete_ptrs(db);
}

int take_top_choice_input() {
    std::cout << "Please choose an option below:" << std::endl;
    std::cout << "1. Print TODO Items" << std::endl;
    std::cout << "2. Create new todo item" << std::endl;
    std::cout << "3. Edit item" << std::endl;
    std::cout << "4. Mark item complete" << std::endl;
    std::cout << "5. Delete an Item" << std::endl;
    std::cout << "6. Save and Quit" << std::endl;
    std::cout << "Enter a number here:";
    int input;
    std::cin >> input;

   
}

STORAGE_INTERFACE* create_db()
{
    STORAGE_INTERFACE *db = new STORAGE_INTERFACE;
    return db;
}

void delete_ptrs(STORAGE_INTERFACE *db) {
    delete db;
}