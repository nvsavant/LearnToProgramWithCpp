/*
 * Date.h
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#ifndef CHAPTER13_DATE_H_
#define CHAPTER13_DATE_H_
#include <iostream>
using namespace std;
class Date {
private:
	int month;
	int year;
	int date;
public:
	Date();
	Date(int day, int month, int year);
	virtual ~Date();
	int getDate();
	void setDate(int);
	int getMonth();
	void setMonth(int);
	int getYear();
	void setYear(int);
	bool operator==(const Date&);
	bool operator >(Date&);

};

#endif /* CHAPTER13_DATE_H_ */
