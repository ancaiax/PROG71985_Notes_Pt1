#define _CRT_SECURE_NO_WARNINGS
#define MAXSIZE 80
#include <stdio.h>

//madisont - prog71985 - week07
//This should be a program for illustrating 'switch and case'

char getAChar() {
	char buf[MAXSIZE];
	fgets(buf, MAXSIZE, stdin);
	return buf[0];
}

int main(void) {

	char input = '\0';

	do {
		printf("1. option 1\n");
		printf("2. option 2\n");
		printf("q. quit\n");

		input = getAChar();
		/*if (input == '1')
			printf("option 1 selected\n");
		else if (input == '2')
			printf("option 2 selected\n");
		else if (input == 'q')
			printf("good bye\n");
		else
			printf("invalid input. try again\n");*/

		switch (input) {
			case '1':
				printf("option 1 selected\n");
				break;
			case '2':
				printf("option 2 selected\n");
				break;
			case 'q':
				printf("good bye\n");
				break;
			default:
				printf("invalid input. try again\n");
		}
	} while (input != 'q');

	return 0;
}