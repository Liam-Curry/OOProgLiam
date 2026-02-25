// Liam Curry
// c00311724
// 10-11-2025
// Labsheet 8, 
// Time Taken: 0 hours, 0 minutes
// Known bugs: No error checking on letters or control characters

#include <iostream>

void secsToHMS(int t_totalSeconds); // decalring function

int mainQ9()
{
	int totalSeconds = 0;

	std::cout << "Please enter your total ammount of seconds\n"; //gaining user input on total seconds
	std::cin >> totalSeconds;

	if (totalSeconds <= 0) // checking on if the number entered is zero or below
	{
		std::cout << "Error, seconds entered is invalid\n";
	}
	else
	{
		secsToHMS(totalSeconds); // calling function
	}
	
	system("Pause");
	return 0;
}

void secsToHMS(int t_totalSeconds) // function which calculates the total hours, minutes and seconds
{
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
	int totalWOhours = 0;
	int totalWOminutes = 0;

	hours = t_totalSeconds / 3600;
	totalWOhours = t_totalSeconds - (hours * 3600); // total without hours. eg: totalWOhours=3662-(1*3600)=62

	minutes = totalWOhours / 60;
	totalWOminutes = totalWOhours % 60; // total without minutes. eg: totalWOminutes=totalWOhours%60=2

	seconds = totalWOminutes; // applies totalWOminutes to seconds 

	std::cout << "Your total hours is: " << hours << "\nYour total minutes is: " << minutes << "\nYour total seconds is: " << seconds << std::endl;
}