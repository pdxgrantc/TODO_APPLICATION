#pragma once

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
	TODO_ITEM(std::string name, int creation_date, int due_date, std::string information);
	void create_item(std::string name, int creation_date, int due_date, std::string information);

};

