#pragma once
#include "Student.h"

class NonGamingStudent : public Student
{
private:
	string streamingService;
	int hoursNonGaming;

public:

	NonGamingStudent() //Default constructor
	{
		SetStreamingService("Netflix");
		SetNonGaming(rand() % 50 + 5);
	}

	//Streaming Services accessors and mutators
	void SetStreamingService(string ss)
	{
		streamingService = ss;
	}
	string GetStreamingService()
	{
		return streamingService;
	}
	//Hours Non gaming
	void SetNonGaming(int nhg)
	{
		hoursNonGaming = nhg;
	}
	int GetNonGaming()
	{
		return hoursNonGaming;
	}


	~NonGamingStudent()//destructor
	{

	}



};