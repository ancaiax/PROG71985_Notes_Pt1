#include "a3q1.h"
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define PRECISION 0.1

//my test harness for 'function under test'
//madisont - prog71985 - week06

bool mostlyEqual(double a, double b) {

	double difference = fabs(a - b);
	if (difference < PRECISION)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void testRunner(double a, double b, double expected) {
	
	double actual = summing(a, b);

	if (mostlyEqual(actual, expected))
	{
		printf("PASS (%0.20lf, %0.20lf)\n", actual, expected);
	}
	else
	{
		printf("FAIL (%0.20lf, %0.20lf)\n", actual, expected);
	}

}

int main(void) {

	printf("%0.20lf\n", summing(1.0, 2.0));

	testRunner(1.0, 2.0, 3.0);
	testRunner(1.93, 1.06, 3.0);

	return 0;
}