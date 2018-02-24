/*
 * Calculator.cpp
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#include "Calculator.h"
#include <iostream>

using namespace std;

Calculator::Calculator() {
}

Calculator::~Calculator() {
}

double Calculator::calc(double op1, double op2, char op) {
	switch (op) {
	case '+':
		return add(op1, op2);
	case '-':
		return sub(op1, op2);
	case '*':
		return mul(op1, op2);
	case '/':
		return div(op1, op2);
	default:
		return -1;
	}
}

double Calculator::add(double op1, double op2) {
	return op1 + op2;
}

double Calculator::sub(double op1, double op2) {
	return op1 - op2;
}

double Calculator::div(double op1, double op2) {
	if (op2 == 0) {
		return -1;
	}
	return op1 / op2;
}

double Calculator::mul(double op1, double op2) {
	return op1 * op2;
}

int main(int argc, char **argv) {
	Calculator c;

	char op;
	double op1, op2;

	while (true) {
		cout << "Enter the expression" << endl;
		cin >> op1 >> op >> op2;
		cout << c.calc(op1, op2, op) << endl;
	}

//	double a = 20;
//	double b = 10;
//	cout << c.calc(a, b, '+') << endl;
//	cout << c.calc(a, b, '-') << endl;
//	cout << c.calc(a, b, '*') << endl;
//	cout << c.calc(a, b, '/') << endl;
	return 0;
}

