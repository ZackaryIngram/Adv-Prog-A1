#pragma once
#include "Person.h"
#include <string>


class Student : public Person
{
private:
	string college;
	string program;
	int semester;

public:
	Student() //default constructor
	{
		SetCollege("George Brown");
		SetProgram("Computer Science");
		SetSemester(rand() % 5 + 1);
	}

	~Student()
	{

	}

	//College accessors and mutators
	void SetCollege(string c);
	string GetCollege();

	//Program accessors and mutators
	void SetProgram(string p);
	string GetProgram();

	//Program accessors and mutators
	/*void SetProgram(string p);
	string GetProgram();*/

	//Semester
	void SetSemester(int s);
	int GetSemester();
};
//College
void Student::SetCollege(string c)
{
	college = c;
}
string Student::GetCollege()
{
	return college;
}
//Program
void Student::SetProgram(string p)
{
	program = p;
}
string Student::GetProgram()
{
	return program;
}
//Semester
void Student::SetSemester(int s)
{
	semester = s;
}
int Student::GetSemester()
{
	return semester;
}