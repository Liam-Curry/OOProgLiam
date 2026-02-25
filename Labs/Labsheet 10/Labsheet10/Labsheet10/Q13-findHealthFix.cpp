// Liam Curry
// c00311724
// 28-01-2026
// -------------------------------------------------------------------
// Labsheet 10, Question 13: Find player health fixed
// Time Taken: 0 hours 10 minutes
// -------------------------------------------------------------------
// Known Bugs: No error checking on syntax, numbers or control letters

#include <iostream>
#include <string>

const int MAX_PLAYERSV8 = 8;
int noOfPlayersV8 = 8;
std::string namesArrayV8[MAX_PLAYERSV8];
int healthArrayV8[MAX_PLAYERSV8];

// Declaring functions
void initialiseArraysV8();
std::string findPlayerHealth(std::string t_aName);

int mainQ13()
{
	std::string message = " ";
	std::string aName = " ";

	initialiseArraysV8();

	std::cout << "Enter player name\n";
	std::cin >> aName;

	message = findPlayerHealth(aName);

	std::cout << message << std::endl;

	system("Pause");
	return 0;
}

/// <summary>
/// To find the first player with the name entered by the user
/// </summary>
/// <param name="t_aName"> The name input by the user in main </param>
/// <returns> It returns the  </returns>

std::string findPlayerHealth(std::string t_aName)
{
	std::string aMessage = " ";
	bool found = false;
	int index = 0;

	for (index; index <= noOfPlayersV8; index++)
	{
		if (namesArrayV8[index] == t_aName)
		{
			found = true;
			break;
		}
	}

	if (found == true)
	{
		aMessage = "Player " + t_aName + " has a health of " + std::to_string(healthArrayV8[index]);
	}
	else
	{
		aMessage = "There is no player called " + t_aName + " in the game.";
	}
	return aMessage;
}

/// <summary>
/// Initailsing the arrays
/// </summary>

void initialiseArraysV8()
{
	namesArrayV8[0] = "Tom";
	namesArrayV8[1] = "Sam";
	namesArrayV8[2] = "Ann";
	namesArrayV8[3] = "Kai";
	namesArrayV8[4] = "Joe";
	namesArrayV8[5] = "Ray";
	namesArrayV8[6] = "Dave";
	namesArrayV8[7] = "Sue";

	healthArrayV8[0] = 3;
	healthArrayV8[1] = 6;
	healthArrayV8[2] = 2;
	healthArrayV8[3] = 1;
	healthArrayV8[4] = 4;
	healthArrayV8[5] = 6;
	healthArrayV8[6] = 1;
	healthArrayV8[7] = 6;
}



// Questions

// It does find the first player with the same name, but it doesnt return the first as it keeps looping
// This code does have one major error, that being the variable index
// Index is declared inside the for loop, therefor it can only be used/seen inside the for loop
// This makes the display message break as the variable index doesn't exist inside the message variable
// Index also was set to 1, therefor missing the first cell of the array
// It also does not return the right health value as it has index set to 8 when it finishes the loop

// I have modified it to work properly by declaring Index inside the function so it can be used inside the whole function
// I have also added a break when it finds the first player with that name