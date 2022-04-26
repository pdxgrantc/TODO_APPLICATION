#pragma once

#include <iostream>
#include <string>
#include "STORAGE_INTERFACE.h"

class APPLICATION
{
protected:
	STORAGE_INTERFACE* db;
public:
	APPLICATION();
	void edit_item_stage_two(int);
	void main_driver(int top_choice);
	void print_list();
	void create_new_todo();
	void edit_item();
	void mark_complete();
	void delete_item();
	void save_and_quit();
	void test_additions();
};

/*
CC = g++ -std=c++14
exeFile = app
$(exeFile): TODO_APPLICATION.o APPLICATION.o DATE.o STORAGE_INTERFACE.o TODO_ITEM.o UTILITIES.o
	$(CC) TODO_APPLICATION.o APPLICATION.o DATE.o STORAGE_INTERFACE.o TODO_ITEM.o UTILITIES.o  -o $(exeFile)
TODO_APPLICATION.o: TODO_APPLICATION.cpp
	$(CC) -c TODO_APPLICATION.cpp
APPLICATION.o: APPLICATION.cpp
	$(CC) -c APPLICATION.cpp
DATE.o: DATE.cpp
	$(CC) -c DATE.cpp
STORAGE_INTERFACE.o: STORAGE_INTERFACE.cpp
	$(CC) -c STORAGE_INTERFACE.cpp
TODO_ITEM.o: TODO_ITEM.cpp
	$(CC) -c TODO_ITEM.cpp
UTILITIES.o: UTILITIES.cpp
	$(CC) -c UTILITIES.cpp

clean:
	-rm *.o

*/