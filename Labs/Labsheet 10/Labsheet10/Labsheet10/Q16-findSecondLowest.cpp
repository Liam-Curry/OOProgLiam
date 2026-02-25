// Liam Curry
// c00311724
// 29-01-2026
// -------------------------------------------------------------------
// Labsheet 10, Question 16:
// Time Taken: 0 hours 0 minutes
// -------------------------------------------------------------------
// Known Bugs: No

#include <iostream>
#include <string>

const int MAX_PLAYERSV9 = 8;
int noOfPlayersV9 = 8;
std::string namesArrayV9[MAX_PLAYERSV9];
int healthArrayV9[MAX_PLAYERSV9];

// Declaring functions
void initialiseArraysV9();
std::string findSecondLowest();

int mainQ16()
{
	std::string message = " ";

	initialiseArraysV9();
	message = findSecondLowest();

	std::cout << message << "are/is the player(s) with the lowest health" << std::endl;

	system("Pause");
	return 0;
}

std::string findSecondLowest()
{
	const int SECOND_LOWEST = 2; // change for the second lowest, 2 is typically the second lowest
	std::string aMessage = "";
	bool found = false;

	for (int index = 0; index < noOfPlayersV9; index++)
	{
		if (healthArrayV9[index] == SECOND_LOWEST)
		{
			aMessage = aMessage + namesArrayV9[index] + " ";
		}
	}
	return aMessage;
}

/// <summary>
/// Initailsing the arrays
/// </summary>

void initialiseArraysV9()
{
	namesArrayV9[0] = "Tom";
	namesArrayV9[1] = "Sam";
	namesArrayV9[2] = "Ann";
	namesArrayV9[3] = "Kai";
	namesArrayV9[4] = "Joe";
	namesArrayV9[5] = "Ray";
	namesArrayV9[6] = "Dave";
	namesArrayV9[7] = "Sue";

	healthArrayV9[0] = 3;
	healthArrayV9[1] = 6;
	healthArrayV9[2] = 2;
	healthArrayV9[3] = 1;
	healthArrayV9[4] = 4;
	healthArrayV9[5] = 6;
	healthArrayV9[6] = 1;
	healthArrayV9[7] = 6;
}