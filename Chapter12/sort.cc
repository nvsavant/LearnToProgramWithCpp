/*
 * sort.cc
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <time.h>
#include <stdint.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

void buildArray(uint32_t arr[], uint32_t size) {
	srand((unsigned int) time(NULL));
	for (uint32_t arr_i = 0; arr_i < size; arr_i++) {
		arr[arr_i] = rand() % 100;
	}
}

void displayArray(uint32_t arr[], uint32_t size) {
	for (uint32_t arr_i = 0; arr_i < size; arr_i++) {
		cout << arr[arr_i] << endl;
	}
}

int main(int argc, char **argv) {
//	cout<<"Enter the size of array"<<endl;
	uint32_t num = 5;
//	cin >> num;


	uint32_t arr[num];
	buildArray(arr,num);
	cout<<"Before sort"<<endl;
	displayArray(arr,num);

	cout<<"After sort"<<endl;
	sort(arr,arr+num);
	displayArray(arr,num);

	return 0;
}
