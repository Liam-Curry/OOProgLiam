// Liam Curry
// c00311724
// 26-01-2026
// -------------------------------------------------------------------
// Labsheet 10, Question 10: Changing a player's health value
// Time Taken: 0 hours 20 minutes
// -------------------------------------------------------------------
// Known Bugs: No error checking on numbers or spelling/capitalisation

/*#include <iostream>
#include <string>

const int MAX_PLAYERSV5 = 8;
int noOfPlayersV5 = 8;
std::string namesArrayV5[MAX_PLAYERSV5];
int healthArrayV5[MAX_PLAYERSV5];

// Declaring functions
void initialiseArraysV5();
int changePlayerHealth(std::string t_aName);

int mainQ10()
{
	initialiseArraysV5(); // function call
	std::string aName = " ";
	int indexPos = 0;

	std::cout << "Please enter a player's name to edit their health\n";
	std::cin >> aName;

	indexPos = changePlayerHealth(aName); // function call

	// return -1 if error
	if (indexPos == -1)
	{
		std::cout << "Player was not found in the array\n";
	}
	else
	{
		std::cout << "Player health updated\n";
	}

	system("Pause");
	return 0;
}

/// <summary>
/// Initialising the arrays
/// </summary>

void initialiseArraysV5()
{
	namesArrayV5[0] = "Tom";
	namesArrayV5[1] = "Sam";
	namesArrayV5[2] = "Ann";
	namesArrayV5[3] = "Kai";
	namesArrayV5[4] = "Joe";
	namesArrayV5[5] = "Ray";
	namesArrayV5[6] = "Dave";
	namesArrayV5[7] = "Sue";

	healthArrayV5[0] = 3;
	healthArrayV5[1] = 6;
	healthArrayV5[2] = 2;
	healthArrayV5[3] = 1;
	healthArrayV5[4] = 4;
	healthArrayV5[5] = 6;
	healthArrayV5[6] = 1;
	healthArrayV5[7] = 6;
}

/// <summary>
/// Function used to change the health of a specific player
/// </summary>
/// <param name="t_aName"> To find which player to change </param>
/// <returns> returns the pos for error checking, -1 when error </returns>

int changePlayerHealth(std::string t_aName)
{
	int index = 0;
	bool found = false;
	int pos = 0;

	for (index = 0; index < noOfPlayersV5; index++)
	{
		if (t_aName == namesArrayV5[index])
		{
			std::cout << "Edit the players health\n";
			std::cin >> healthArrayV5[index];

			found = true;

			break;
		}
	}

	// Error checking
	if (!found)
	{
		pos = -1;
		return pos;
	}
	else
	{
		pos = healthArrayV5[index];
		return pos;
	}
}*/