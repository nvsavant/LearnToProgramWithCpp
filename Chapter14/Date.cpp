/*
 * Date.cpp
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#include "Date.h"
#include <iostream>

using namespace std;

Date::Date(int date, int month, int year) {
	this->date = date;
	this->month = month;
	this->year = year;
}

Date::Date() {
	this->date = 0;
	this->month = 0;
	this->year = 0;
}

Date::~Date() {
	// TODO Auto-generated destructor stub
}

bool Date::operator ==(const Date& day) {
	if (this->date == day.date && this->month == day.month
			&& this->year == day.year) {
		return true;
	} else {
		return false;
	}
}

int Date::getDate() {
	return this->date;
}

int Date::getMonth() {
	return this->month;
}

int Date::getYear() {
	return this->year;
}

void Date::setDate(int date) {
	this->date = date;
}

void Date::setMonth(int month) {
	this->month = month;
}

void Date::setYear(int year) {
	this->year = year;
}

istream &operator >>(istream &input, Date& day) {
	char slash1, slash2;
	int date, month, year;
	input >> date >> slash1 >> month >> slash2 >> year;
	day = Date(date, month, year);
	return input;
}

ostream &operator <<(ostream &output, Date& day) {
	output << day.getDate() << "/" << day.getMonth() << "/" << day.getYear()
			<< endl;
	return output;
}

bool Date::operator >(Date& day) {
	if (this->year > day.getYear()) {
		return true;
	} else if (this->year == day.year) {
		if (this->month > day.getMonth()) {
			return true;
		} else if (this->month == day.getMonth()) {
			if (this->date > day.getDate()) {
				return true;
			} else {
				return false;
			}
		} else {
			return false;
		}
	} else {
		return false;
	}
}

int main(int argc, char **argv) {

	Date d1, d2;
	cout << "Enter day" << endl;
	cin >> d1;
	cout << "Enter day" << endl;
	cin >> d2;
	cout << d1 << d2;

	if (d1 > d2) {
		cout << "D1 is greater than D2" << endl;
	} else {
		cout << "D1 is not greater than D2" << endl;
	}

	return 0;
}
