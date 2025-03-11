#pragma once
//
// Created by Madison on 1/31/2024
// madisont - prog71985 - week04
// generic interface of stuff
//

#ifndef MAXOF_LIBRARY_H
#define MAXOF_LIBRARY_H
#include <stdbool.h>

int FindMax(int first, int second, int third);	//function prototype (signature)

// & => the address of (some variable)
// * => the value at (some address)
void swap(int* a, int* b); //catch


bool searchArray(int*, int, int);	// general

#endif //MAXOF_LIBRARY_H