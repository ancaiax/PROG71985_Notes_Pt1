#include <stdio.h>
#include "library.h"

//write a program that determines the max of 3 ints
//store the maximum value in a variable named max

//madisont - prog71985 - week 04

void testRunner(int expected, int first, int second, int third) {

	//unit test case
	int actual = FindMax(first, second, third);
	/*if (expected == actual)
		printf("PASS\n");
	else
		printf("FAIL\n");*/

	(expected == actual) ? printf("PASS\n") : printf("FAIL\n");
		//question ? yes answer : no answer
	return 0;
}

void testRunner2(int a, int b) {
	//unit test case
	int origA = a;
	int origB = b;
	
	// & => the address of (some variable)
	// * => the value at (some address)
	swap(&a, &b); //throw

	if(a == origB && b == origA)
		printf("PASS\n");
	else
		printf("FAIL\n");


	return 0;
}

void testRunner3(int* array, int arraySize, int searchItem, bool expected) {
	bool actual = searchArray(array, arraySize, searchItem);
	if (expected == actual)
		printf("PASS\n");
	else
		printf("FAIL\n");
}

#define ARRAYSIZE 5

int main() {
	int array[ARRAYSIZE] = {1,2,3,4,5};

	testRunner3(array, ARRAYSIZE, 12, false);
	testRunner3(array, ARRAYSIZE, 3, true);
	//testRunner2(1, 2);
	//testRunner(-1, -2, -8, -1);
	//testRunner(8, 0, -1, 8);
	//testRunner(1, 1, 1, 1);
	
	return 0;
}