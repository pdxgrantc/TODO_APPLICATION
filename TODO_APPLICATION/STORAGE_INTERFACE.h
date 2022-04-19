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
	void create_new_todo_item(std::string name, DATE due_date, std::string information);
	void print_list();
	STORAGE_INTERFACE();
	~STORAGE_INTERFACE();
};

