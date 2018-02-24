/*
 * swap.cc
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#include <iostream>

using namespace std;

void swap(int* num1, int* num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main(int argc, char **argv) {

	int num1 = 10;
	int num2 = 20;

	cout << "Before swap" << endl;
	cout << "Num1: " << num1 << endl;
	cout << "Num2: " << num2 << endl;

	swap(&num1, &num2);

	cout << "After swap" << endl;
	cout << "Num1: " << num1 << endl;
	cout << "Num2: " << num2 << endl;

	return 0;
}
