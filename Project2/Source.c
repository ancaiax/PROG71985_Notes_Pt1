#include <stdio.h>
#include <stdbool.h>
#define CONVERSION_FACTOR 2.54

//just code to help us discuss some new ideas
//madisont - prog71985 - week 03

int main(void) {

	const float conversion_factor = 2.54f;

	int z = 31;

	typedef Age int;				//an alias, or aka 

	Age myAge = 31;

	float answer = height * CONVERSION_FACTOR;

	// yes == (anything other than 0)
	// no == 0 == false 

	if (true) {


	}

	int x = 2; //single = is for assignment

	if (x = 5) {			//say "x is 5"? yes
		//do a thing
	}

	if (x == 2) {		//expression - evaluate - yes or no
		//this is the stuff that is executed
	}
	else if (x == 5) {
		//do the stuff when x == 5
	}
	else {
		//if its not yes, do this aka x != 2
	}

	//while
	while (x != 2) {					//will run 0 times, becase x = 2;
		//the lines to be repeated
	}

	while (x == 2) {						//an infinite loop, make sure you have an exit condition
		//these lines will also be run

		x++;
	}
	//while is purpose built for problems with loops of 0 or more times

	//increment
	int j = 0;
	j = j + 1;		//these three are equivalent
	j += 1;
	j++;			//idiomatic C

	//decrement
	int k = 12;
	k = k - 1;
	k -= 1;
	k--;

	//l-value - a thing that can store a thing (left)
	//r-value - anything that is not an l-value (right)

	const int x = 3; //non-modifiable l-value


	//for
	// count from 10 to 100 by ones (1)
	for (int i = 10; i < 100; i++) {
		//the stuff that is looped through
	}
	//for is purpose built for problems with loops having a known range
	
	//do...while
	int i = 13;

	do {
		//these are the looped instructions
	} while (i > 50);
	//do...while is purpose built for problems with loops that are 1 or more times

	int size_of_int = sizeof(int);
	printf("sizeof int is %d\n", size_of_int);	//4
	printf("sizeof int is %lu\n", (int)sizeof(size_t));	//8

	size_t i;		//2 properties: unsigned platform(cpu) agnostic

	float f1 = 1.89f;

	int i1 = (int)f1;	//truncate	i1 = 1; add 0.5 to round

	return 0;
}