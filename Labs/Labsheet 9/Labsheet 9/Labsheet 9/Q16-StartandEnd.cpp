// Liam Curry
// c00311724
// 12-01-2026
// Labsheet 9, Entering a start and end number to show on screen
// Time Taken: 0 hours, 10 minutes
// Known Bugs: No error checking on letters or control characters

#include <iostream>

void addNumbers(int t_startNum, int t_endNum); // declaring function

int mainQ16()
{
	int startNum = 0;
	int endNum = 0;

	std::cout << "Please enter a starting number\n";
	std::cin >> startNum;

	std::cout << "Please enter an ending number\n";
	std::cin >> endNum;

	std::cout << std::endl;

	if (endNum < startNum) // error checking on if the endNum is larger/smaller
	{
		std::cout << "Error, ending number cannot be smaller than the starting number\n";
	}
	else
	{
		addNumbers(startNum, endNum); // calling function
	}

	std::cout << std::endl;
	system("Pause");
	return 0;
}

/// Function used to calculate what numbers to display>
/// t_startNum is used to see where to start the displayed numbers
/// t_endNum is used to see where to end the displayed numbers

void addNumbers(int t_startNum, int t_endNum)
{
	int total = 0;

	while (t_startNum <= t_endNum)
	{
		std::cout << t_startNum << " ";
		total = total + t_startNum;
		t_startNum++;
	}
	std::cout << std::endl;
	std::cout << "The sum of the numbers is: " << total;
}

// The code given works as intended, but all that I changed is adding an Error Check
// This error check makes sure that the ending number entered isn't smaller than the starting number entered