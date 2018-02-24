/*
 * arithmetic.cc
 *
 *  Created on: Feb 23, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv) {
	int x, y;
	cout << "Enter value of x and y" << endl;
	cin >> x >> y;

	double result1, result2, result3, result4, result5;

	result1 = abs(x + y);
	result2 = abs(x) + abs(y);
	result3 = pow(x, 3) / (x + y);
	result4 = sqrt(pow(x, 6) + pow(y, 5));
	result5 = pow(x + sqrt(y), 7);

	cout << result1 << endl;
	cout << result2 << endl;
	cout << result3 << endl;
	cout << result4 << endl;
	cout << result5 << endl;

	return 0;
}
