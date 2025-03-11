#include "student.h"
#include "professor.h"
#include "guest.h"
#include "classroom.h"
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//a main program using student
//madisont - prog71985 - week06

int main(void) {

	//CreateClassroom
	//AddStudentsToClassroom()
	//RemoveStudentFromClassroom
	//CreateProfessor
	//AddProfessorToClassroom()
	//SaveClassroomToDisk
	//LoadClassroomFromDisk
	//PrintClassroom
	//CreateGuest
	//AddGuestToClassroom
	//CreateTeacherAssistant
	//AddTeacherAssistantToClassroom

	STUDENT bob = CreateStudent("Bob", 12345678);
	PROFESSOR steve = CreateProfessor("Steve", "CS");
	GUEST chair = CreateGuest("ChairDavid");

	PrintStudent(bob);
	PrintProfessor(steve);
	PrintGuest(chair);

	DisposeStudent(bob);
	DisposeProfessor(steve);
	DisposeGuest(chair);

	return 0;
}