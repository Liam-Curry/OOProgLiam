// Liam Curry
// c00311724
// 1-12-2025
// Labsheet 9, counting numbers in a list
// Time Taken: 2 hours, 20 minutes
// Known Bugs: No error checking on letters or control characters

#include <iostream>

void countOccurences(int t_maxNum); // declaring function

int mainQ12()
{
	int maxNum = 0;

	std::cout << "Please enter the number of numbers you wish to enter\n";
	std::cin >> maxNum;

	if (maxNum <= 0) // error checking on input
	{
		std::cout << "Error, number entered cannot be 0 or below\n";
	}
	else
	{
		countOccurences(maxNum); // calling function
	}
	system("Pause");
	return 0;
}

/// Function used to gain the lowest, highest, and the count of highest and lowest
/// t_maxNum gained from user input to count how many inputs they want

void countOccurences(int t_maxNum)
{
	int count = 1;
	int input = 0;
	int lowest = 10;
	int highest = 0;
	int highestCount = 0;
	int lowestCount = 0;
	int check = 0;

	while (count <= t_maxNum)
	{
		check = 0;
		std::cout << "Enter a number (1-10): ";
		std::cin >> input;

		while (input < 1 || input > 10) // error checking on if its in the range
		{
			std::cout << "Error, please re-enter as number is not in-between 1 and 10: ";
			std::cin >> input;
		} // end loop

		if (count == 1) // assigning at the beginning
		{
			highest = input;
			lowest = input;
		}

		if (input > highest) // for when the highest is a new number
		{
			highest = input;
			highestCount = 1; // resets highest count
		}
		else if (input == highest) // for if input is equal to the already inputted highest
		{
			highestCount++;
		}

		if (input < lowest) // for when the lowest is a new number
		{
			lowest = input;
			lowestCount = 1; // resets lowest count
		}
		else if (input == lowest) // for if input is equal to the already inputted highest
		{
			lowestCount++;
		}
		count++;
	} // end loop

	std::cout << "\nYour highest number is: " << highest;
	std::cout << "\nThe highest number was entered " << highestCount << " time(s)";
	std::cout << "\nYour lowest number is: " << lowest;
	std::cout << "\nThe lowest number was entered " << lowestCount << " time(s)\n";
}