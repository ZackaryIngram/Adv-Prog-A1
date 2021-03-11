#pragma once
#include "NonGamingStudent.h"
#include "GamingStudent.h"
#include <iostream>

using namespace std;

class Survey 
{
private:
	//int participantArray[];
	NonGamingStudent* m_pNonGamingStudent = nullptr;
	GamingStudent* m_pGamingStudent = nullptr;
	int numberGamer;
	int numberNonGamer;
	int participants;

public:
	Survey()
	{

	/*	SetNumberGamer(GetParticipants()/2);
		SetNumberNonGamer(GetParticipants()/2);*/
	}
	~Survey()
	{
		/*if (numberGamer > 0)
		{
			delete[] m_pGamingStudent;
			m_pGamingStudent = nullptr;
		}
		if (numberNonGamer > 0)
		{
			delete[] m_pNonGamingStudent;
			m_pNonGamingStudent = nullptr;
		}*/
	}
	
	void Process(); //Process function that displays info 


	//Number of gamer students
	//void SetNumberGamer(int g)
	//{
	//	numberGamer = g;
	//}
	//int GetNumberGamer()
	//{
	//	return numberGamer;
	//}
	////Number of non gamer students
	//void SetNumberNonGamer(int ng)
	//{
	//	numberNonGamer = ng;
	//}
	//int GetNumberNonGamer()
	//{
	//	return numberNonGamer;
	//}

	//void SetParticipants(int p)
	//{
	//	participants = p;
	//}
	//int GetParticipants()
	//{
	//	return participants;
	//}

	////Arrays of both gamer and non gamer students
	//void numberGamerArray(int g)
	//{
	//	SetNumberGamer(g);
	//	m_pGamingStudent = new GamingStudent[g];
	//}
	//void numberNonGamerArray(int ng)
	//{
	//	SetNumberNonGamer(ng);
	//	m_pNonGamingStudent = new NonGamingStudent[ng];
	//}

	//void StudentNum() //Function that will randomize the 2 kinds of students
	//{
	//	for (int i = 0; i < 500; i++)
	//	{
	//		int random = rand() % 500 + 1;

	//		if (random > 250)
	//		{
	//			numberNonGamer++;
	//		}
	//		else if (random < 250)
	//		{
	//			numberGamer++;
	//		}
	//	}

	//}

	

};


void Survey::Process()
{
	NonGamingStudent m_nonGamingStudent;
	GamingStudent m_gamingStudent;
	
	
	cout << "-------------------" << endl;
	cout << "Non Gaming Students " << endl;
	cout << "-------------------" << endl;
	cout << "Average age: " << m_nonGamingStudent.GetAge() / 10 << endl;
	cout << "Most preferred streaming service: " << m_nonGamingStudent.GetStreamingService() << endl;
	cout << "Average hours consuming non-gaming entertainment: " << m_nonGamingStudent.GetNonGaming() / 10 << endl << endl;

	cout << "---------------" << endl;
	cout << "Gaming Students :" << endl;
	cout << "---------------" << endl;
	cout << "Average age: " << m_gamingStudent.GetAge() / 10 << endl;
	cout << "Most preferred gaming device: " << m_gamingStudent.GetGamingPlatform() << endl;
	cout << "Average hours consuming gaming entertainment: " << m_gamingStudent.GetHoursGaming() / 10 << endl;

		
	
}