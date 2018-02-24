/*
 * Name.cpp
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#include "Name.h"

Name::Name(string name) {
	this->name = name;
}

Name::~Name() {
	// TODO Auto-generated destructor stub
}

string Name::getName() {
	return this->name;
}

void Name::setName(string name) {
	this->name = name;
}

string Name::toString() {
	return this->name;
}

int main(int argc, char **argv) {

	Name n("Nikheel");
//	cout << n.getName() << endl;

	n.setName("NikheelVishwasSavant");
//	cout << n.getName() << endl;

	cout << n.toString() << endl;

	return 0;
}

