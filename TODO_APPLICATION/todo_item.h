#pragma once

#include "DATE.h"
#include <string>

class TODO_ITEM
{
protected:
	std::string title;
	int creation_date;
	int due_date;
	std::string information;
	bool complete;
public:
	TODO_ITEM();
	void create_item(std::string name, DATE creation_date, DATE due_date, std::string information);

};

