/*
 * vector.cc
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(int argc, char **argv) {
	vector<int> grade;
	int number;
	cout << "Enter the number of subjects: ";
	cin >> number;

	for (int i = 0; i < number; i++) {
		int localGrade;
		cout << "Enter a grade: ";
		cin >> localGrade;
		grade.push_back(localGrade);
	}

	double average;
	int sum = 0;
	for (int i = 0; i < number; i++) {
		sum += grade[i];
	}
	average = (double) sum / number;
	cout << fixed << setprecision(2) << "Average is " << average << endl;
	return 0;
}
