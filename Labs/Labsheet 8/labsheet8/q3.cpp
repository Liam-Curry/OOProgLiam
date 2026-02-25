//Liam Curry
//c00311724
//5-11-2025
//Labsheet 8, time given converted to all seconds
//Time Taken: 0 hours, 20 minutes
//Known bugs: No error checking on letters or control characters

#include <iostream>

int secondsCal(int t_hours, int t_minutes, int t_seconds); //declaring function

int mainQ3()
{
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
	int totalSeconds = 0;
	bool errorCheck = false;

	std::cout << "Please enter your amount of hours, minutes and seconds\n"; //gaining user input
	std::cin >> hours;
	std::cin >> minutes;
	std::cin >> seconds;

	if (hours == 0 && minutes == 0 && seconds == 0) //error checking
	{
		std::cout << "Error, all three values are set to zero, please re-enter\n";
		errorCheck = true;
	}
	
	if (hours < 0 || minutes < 0 || seconds < 0) //error checking
	{
		std::cout << "Error, one value entered is an invalid number, please re-enter\n";
		errorCheck = true;
	}

	if (errorCheck == false)
	{
		totalSeconds = secondsCal(hours, minutes, seconds); //calling function
		std::cout << "Your total time in seconds is : " << totalSeconds << std::endl;
	}

	system("Pause");
	return(0);
}

int secondsCal(int t_hours, int t_minutes, int t_seconds) //function used to calculate the time given into seconds
{
	int totalSeconds = 0;

	totalSeconds = (t_hours * 3600) + (t_minutes * 60) + t_seconds;
	return totalSeconds;
}