#include "Student.h"
#include <stdio.h>

Student::Student()
{
}

Student::~Student()
{
}

void Student::Run()
{
	struct StudentInfo
	{
		char name[25];
		char roll_no[8];
		float sgpa[8];
		float cgpa[8];
	} stud1;

	printf("Give the student name: \n");
	scanf("%s", stud1.name); fflush(stdin);


}
