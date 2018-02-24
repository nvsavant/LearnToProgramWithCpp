/*
 * random.cc
 *
 *  Created on: Feb 24, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char **argv) {
	srand((unsigned int) time(NULL));

	cout << rand()%60 << endl;

	return 0;
}
