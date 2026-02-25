//Liam Curry
//c00311724
//22-10-2025
//Labsheet 7, Time in seconds from hours and minutes
//0 hours 10 minutes 
//Known bugs: No error checking on letters or control characters

#include <iostream>

void secondsIn(int t_hours, int t_mins, int t_secs); //declaring function

int mainP7()
{
	int hours = 0;
	int mins = 0;
	int secs = 0;

	std::cout << "Enter your hours\n"; //reading user input
	std::cin >> hours;
	std::cout << "Enter your minutes\n";
	std::cin >> mins;
	std::cout << "Enter your seconds\n";
	std::cin >> secs;

	if (hours < 0 || mins < 0 || secs < 0)
	{
		std::cout << "Error, one value is below zero, please re-enter\n"; //error checking to see if one number entered is negative
	}
	else if (hours == 0 && mins == 0 && secs == 0)
	{
		std::cout << "Error, all three values are zero\n"; //error checking to see if all numbers entered are zero
	}
	else
	{
		secondsIn(hours, mins, secs); //calling the function
	}
	system("Pause");
	return(0);
}

void secondsIn(int t_hours, int t_mins, int t_secs) //function used to convert all values to seconds
{
	int total = 0;

	total = (t_hours * 3600) + (t_mins * 60) + t_secs; //converting all values to seconds

	std::cout << "Your total time in seconds is " << total << std::endl;
}