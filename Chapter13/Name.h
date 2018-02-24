/*
 * Name.h
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#ifndef CHAPTER13_NAME_H_

#include <iostream>
using namespace std;


#define CHAPTER13_NAME_H_

class Name {
private:
	string name;
public:
	Name(string);
	virtual ~Name();
	string getName();
	void setName(string name);
	string toString();
};

#endif /* CHAPTER13_NAME_H_ */
