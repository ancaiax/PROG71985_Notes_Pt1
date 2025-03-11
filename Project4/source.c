#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

//arrays and strings!
//madisont - prog71985 - week 05

/*

type system

C is static and weak
Python dynamic and strong

static typed				v.				dyanmically typed
	int i = 5;									e = 5
											
	float f = (float)i;							e = "Steve"

strong						v.				weak

	once an int, always an int					float f = (float)i;
												(char*)z = (void*)q;
	swap(&a,&b); //the address of
*/
//VLA - variable length array - we do not support these

#define SIZE 4				//the ultimate r-value
#define MAXSIZE 5

//In C, arrays reduce to pointers
bool searchArray(int* collection, int arraySize, int term) {
	printf("size of collection: %zu\n", sizeof(collection));

	for (int i = 0; i < arraySize; i++) {
		//printf("examining %d\n", collection[i]);
		if (collection[i] == term)
			return true;
	}
	return false;
}


int main(void) {
	
	int array[MAXSIZE] = { 1,2,3,4,5, };
	printf("size of collection(main): %zu\n", sizeof(array));
	if (searchArray(array, MAXSIZE, 12))
		printf("found\n");
	else
		printf("not found\n");

//--------


	//int array5[5] = { 1,2,3,4,5 };		//size must be an r-value
	
	//int n = 9;
	
	//printf("%d\n", array5[n]);

	//int array2[] = { 1, 2, 3, 4 };

	//int twoDarray[2][3] = {
	//							{1,2,3},
	//							{4,5,6}
	//						};

	char arrayOfChars[] = { 'a', 'b', 'c', 'd' };

	char letter[] = "a";	//" <= string, ' <= char
							//

	printf("%s\n", arrayOfChars);
	printf("%s\n", "abcd");


	return 0;
}