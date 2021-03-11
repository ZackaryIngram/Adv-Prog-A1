#pragma once
#include <string>

using namespace std;

class Person 
{
private:
	int age;
	string name;

public:
	Person()//Default Constructor
	{
		SetName("Zack");
		SetAge(rand() % 12 + 18); 
	}
	


	~Person() //destructor
	{

	}

	void SetName(string n);
	string GetName() const;
	void SetAge(int a);
	int GetAge() const;
};

//Name mutators and accessors
void Person::SetName(string n)
{
	name = n;
}
string Person::GetName() const
{
	return name;
}
//Age mutators and accessors
void Person::SetAge(int a)
{
	age = a;
}
int Person::GetAge() const
{
	return age;
}