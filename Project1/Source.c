#define _CRT_SECURE_NO_WARNINGS
#define CONVERSION_FACTOR_CM_TO_INCH 2.54 //gets rid of a magic number = any number that needs context
#include <stdio.h>	
#include <stdlib.h>

// write a program to get input from user,
// translate from inches to cm and output to user

// madisont - prog71985 - week 02


int main(void) {

	//input
	// get height in inches from user
	printf("please enter your height in inches: ");
	float height_in_inches;
	int symbols_returned = scanf("%f", &height_in_inches);				// &variable if input is numeric
	if (symbols_returned != 1) {										// variable if input is text
		printf("error: you did not give good input.  exiting\n");
		return 1;
		exit(EXIT_FAILURE);
	}
	if (height_in_inches <= 0) {
		printf("error: you entered a bad value.  exiting\n");
		exit(EXIT_FAILURE);
	}
	// if(scanf("%f", &variable) == 1) && variable > 0) {
	//  good
	//
	// (x==5)									// = assignment x = 5; the value of x is 5
	//	yes										// == evaluation x == 5 ?? is x equal to 5
	//											// ! = not
	//											// != not equal (evaluation)
	//else {
	//	no
	//}

	//transform
	// multiply input by 2.54 to get output
	float height_in_cm = height_in_inches * CONVERSION_FACTOR_CM_TO_INCH;

	//output
	// print out height in cm
	printf("the height, in cm is: %f cm.\n", height_in_cm);

	return EXIT_SUCCESS;
}