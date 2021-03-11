#pragma once
#include "Student.h"

class GamingStudent : public Student
{
private:
	string gamingPlatform;
	int hoursGaming;

public:

	GamingStudent()//Default constructor
	{
		SetGamingPlatform("Xbox");
		SetHoursGaming(rand() % 60 + 10);
	}


	//Gaming platfrom accessors and mutators
	void SetGamingPlatform(string gp)
	{
		gamingPlatform = gp;
	}
	string GetGamingPlatform()
	{
		return gamingPlatform;
	}
	//hours gaming
	void SetHoursGaming(int hg)
	{
		hoursGaming = hg;
	}
	int GetHoursGaming()
	{
		return hoursGaming;
	}
	~GamingStudent()//Destructor
	{

	}


};