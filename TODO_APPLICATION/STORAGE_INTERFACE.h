#pragma once

#include <vector>
#include <string>
#include "TODO_ITEM.h"
#include "DATE.h"

class STORAGE_INTERFACE
{
protected:
	std::vector<TODO_ITEM> todo_items;
	
public:
	void test();
	void create_new_todo_item();
	void print_list();
	STORAGE_INTERFACE();
	~STORAGE_INTERFACE();
};

