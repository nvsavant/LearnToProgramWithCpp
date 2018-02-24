/*
 * Calculator.h
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#ifndef CHAPTER13_CALCULATOR_H_
#define CHAPTER13_CALCULATOR_H_

class Calculator {
private:
	double add(double, double);
	double sub(double, double);
	double mul(double, double);
	double div(double, double);
public:
	Calculator();
	virtual ~Calculator();
	double calc(double, double, char);
};

#endif /* CHAPTER13_CALCULATOR_H_ */
