#include <iostream>
#include <string>
#include <cmath>
#include "Survey.h"

using namespace std;

int participants = 1;

int main()
{
	int ready = 0;
	int participants = 0;
	Survey m_survey;

	cout << "---------" << endl;
	cout << "Welcome !" << endl;
	cout << "---------" << endl << endl;
	cout << "Enter in the number of participants (MAX 500): " << endl;
	cin >> participants;

	/*m_survey.SetParticipants(participants);*/

	cout << "Are you ready to process the survey ? Enter 1 if you are: " << endl;
	cin >> ready;

	if (ready == 1)
	{
		m_survey.Process();
	}
	else
	{
		cout << "You did not want to see survey :( " << endl;
	}

	cout << "Thank you !" << endl;


	return 0;
}