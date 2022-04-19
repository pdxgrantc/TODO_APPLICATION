#include "TODO_ITEM.h"
#include "DATE.h"
#include <string>

TODO_ITEM::TODO_ITEM() {
	complete = false;
}

void TODO_ITEM::create_item(std::string title, DATE creation_date, DATE due_date, std::string information) {
	title = this->title;
	creation_date = this->creation_date;
	due_date = this->due_date;
	information = this->information;
	title = this->title;
	complete = false;
}

void TODO_ITEM::mark_complete() {
	complete = true;
}

std::string TODO_ITEM::get_title() {
	return title;
}

DATE TODO_ITEM::get_creation_date() {
	return creation_date;
}

DATE TODO_ITEM::get_due_date() {
	return due_date;
}

std::string TODO_ITEM::get_information() {
	return information;
}

bool TODO_ITEM::get_complete() {
	return complete;
}
