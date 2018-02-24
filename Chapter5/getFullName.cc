/*
 * getFullName.cc
 *
 *  Created on: Feb 23, 2018
 *      Author: nvishwas
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	string fullName;
	cout << "Enter your full name: ";
	getline(cin, fullName);
	cout << fullName << endl;
	return 0;
}
