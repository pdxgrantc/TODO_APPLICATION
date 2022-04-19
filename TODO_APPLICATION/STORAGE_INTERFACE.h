#pragma once

#include <vector>
#include <string>
#include "TODO_ITEM.h"

class STORAGE_INTERFACE
{
protected:
	std::vector<TODO_ITEM> todo_items;
	
public:
	void create_new_todo_item(std::string name, int creation_date, int due_date, std::string information);
	STORAGE_INTERFACE();
	~STORAGE_INTERFACE();
};

