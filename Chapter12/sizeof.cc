/*
 * sizeof.cc
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <stdint.h>
using namespace std;

int main(int argc, char **argv) {
	uint32_t *ptr;

	cout << sizeof(ptr) << endl;
	cout << sizeof(*ptr) << endl;

	return 0;
}
