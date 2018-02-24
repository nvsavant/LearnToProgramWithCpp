/*
 * search.cc
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <stdint.h>
#include <time.h>
#include <unistd.h>
#include <algorithm>
using namespace std;

void buildVector(vector<int> &arr, int size) {
	srand((unsigned int) time(NULL));
	for (int i = 0; i < size; i++) {
		arr.push_back(rand() % size);
	}
}

void displayVector(vector<int32_t> arr) {
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << endl;
	}
}

int main(int argc, char **argv) {
	vector<int32_t> arr;
	int size = 5;
	buildVector(arr, size);
	cout << "Before sorting" << endl;
	displayVector(arr);
	cout << endl;
	cout << "After sorting" << endl;
	sort(arr.begin(), arr.end());
	displayVector(arr);
	return 0;
}
