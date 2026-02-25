// Liam Curry
// c00311724
// 26-01-2026
// ---------------------------------------------------------
// Labsheet 10, Question 11: Adding new user to end of array
// Time Taken: 0 hours 30 minutes
// ---------------------------------------------------------
// Known Bugs: No error checking on User input

/*#include <iostream>
#include <string>

const int MAX_PLAYERSV6 = 8;
int noOfPlayersV6 = 7;
std::string namesArrayV6[MAX_PLAYERSV6];
int healthArrayV6[MAX_PLAYERSV6];

// Declaring functions
void initialiseArraysV6();
int insertPlayerAtEnd(std::string t_aName, int t_newHealth);

int mainQ11()
{
	std::string aName = " ";
	int newHealth = 0;
	int pos = 0;

	initialiseArraysV6(); // function call

	std::cout << "Enter the name of the new player\n";
	std::cin >> aName;

	std::cout << "Enter their health\n";
	std::cin >> newHealth;

	pos = insertPlayerAtEnd(aName, newHealth); // function call

	// returns -1 if error occured
	if (pos == -1)
	{
		std::cout << "Array is full\n";
	}
	else
	{
		std::cout << "Player with health: " << newHealth << ", named: " << aName << " added to array at position " << pos << std::endl;
	}

	system("Pause");
	return 0;
}

/// <summary>
/// Initialsing the arrays
/// </summary>

void initialiseArraysV6()
{
	namesArrayV6[0] = "Tom";
	namesArrayV6[1] = "Sam";
	namesArrayV6[2] = "Ann";
	namesArrayV6[3] = "Kai";
	namesArrayV6[4] = "Joe";
	namesArrayV6[5] = "Ray";
	namesArrayV6[6] = "Dave";
	namesArrayV6[7] = " ";

	healthArrayV6[0] = 3;
	healthArrayV6[1] = 6;
	healthArrayV6[2] = 2;
	healthArrayV6[3] = 1;
	healthArrayV6[4] = 4;
	healthArrayV6[5] = 6;
	healthArrayV6[6] = 1;
	healthArrayV6[7] = 0;
}

/// <summary>
/// Function used to add the new users to the array
/// </summary>
/// <param name="t_aName"> New name to be added </param>
/// <param name="t_newHealth"> New health to be added </param>
/// <returns> returns the pos for error checking, -1 when error </returns>

int insertPlayerAtEnd(std::string t_aName, int t_newHealth)
{
	int index = 0;
	int pos = 0;

	// checking if the array is full or not
	if (noOfPlayersV6 == MAX_PLAYERSV6)
	{
		pos = -1;
	}
	else
	{
		// noOfPlayers = 7
		namesArrayV6[noOfPlayersV6] = t_aName;
		healthArrayV6[noOfPlayersV6] = t_newHealth;
		noOfPlayersV6++; // changes noOfPlayers to 8 to match with the updated list
	}
	return pos;
}*/