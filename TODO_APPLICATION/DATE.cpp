#include <ctime>
#include "DATE.h"

DATE::DATE() {
	struct tm newtime;
	time_t now = time(0);
	localtime_s(&newtime, &now);
	day = newtime.tm_mday;
	month = 1 + newtime.tm_mon;
	year = 1900 + newtime.tm_year;
}

DATE::DATE(int day, int month, int year) {
	this->month = month;
	this->day = day;
	this->year = year;
}

void DATE::set_current_date() {
	struct tm newtime;
	time_t now = time(0);
	localtime_s(&newtime, &now);
	day = newtime.tm_mday;
	month = 1 + newtime.tm_mon;
	year = 1900 + newtime.tm_year;
}

int DATE::get_day() {
	return day;
}

int DATE::get_month() {
	return month;
}

int DATE::get_year() {
	return year;
}