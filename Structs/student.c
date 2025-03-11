#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXSIZE 50

//madisont - prog71985 - week06 - student implementation

//create, use, destroy/clean

STUDENT CreateStudent(char* name, int number) {
	STUDENT s;
	strncpy(s.name, name, MAXSIZE);
	s.number = number;
	return s;
}

char* GetNameFromStudent(STUDENT s) {
	return s.name;
}

void PrintStudent(STUDENT s) {
	fprintf(stdout, "STUDENT: %s, %d\n", s.name, s.number);
}

void SaveStudentToDisk(STUDENT s, char* filename) {
	fprintf(fp, "STUDENT: %s, %d\n", s.name, s.number);
}

void DisposeStudent(STUDENT s) {
	//nothing
}