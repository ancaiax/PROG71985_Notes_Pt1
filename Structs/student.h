#pragma once
#define MAXSIZE 50
#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>

//student object - interface
//madisont - prog71985 - week06

#ifndef STUDENT_LIBRARY_H
#define	STUDENT_LIBRARY_H

typedef struct student {
	char name[MAXSIZE];
	int number;
} STUDENT;

STUDENT CreateStudent(char*, int);

char* GetNameFromStudent(STUDENT);

void PrintStudent(STUDENT);

void SaveStudentToDisk(STUDENT, FILE*);

void DisposeStudent(STUDENT);

#endif //STUDENT_LIBRARY_H