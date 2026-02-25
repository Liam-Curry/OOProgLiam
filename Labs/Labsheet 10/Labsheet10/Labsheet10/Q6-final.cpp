// Liam Curry
// c00311724
// 29-01-2026
// ------------------------------------------------------------------
// Labsheet 10, All of Q6
// Time Taken: 0 hours 0 minutes
// ------------------------------------------------------------------
// Known Bugs: None

#include <iostream>
#include <string>

// Global variables are variables that can be seen and modified by all functions

const int MAX_PLAYERS = 8;
int noOfPlayers = 8;
std::string namesArray[MAX_PLAYERS];
int healthArray[MAX_PLAYERS];

// declaring all functions
void initialiseArrays();
float calculateSum();
float calculateAverage(float t_sum);
void displayPlayers();
void displayReversePlayers();
void findHighestHealth();
void findLowestHealth();
int findFirstHealthValue(int t_value);
std::string findAllHealthValue(int t_value);
int findLastName(std::string t_name);
int changePlayerHealth(std::string t_aName);
int insertPlayerAtEnd(std::string t_aName, int t_newHealth);

int main()
{
	float sum = 0.0f;
	float avg = 0.0f;
	int input = 0;
	int indexPos = 0;
	int value = 0;
	std::string message = " ";
	std::string name = " ";
	int newHealth = 0;

	// function calls and message displays if needed
	initialiseArrays();
	
	std::cout << "Welcome\nEnter in which function you wish to run\n\n1: calculateSum\n2: calculateAverage\n3: displayPlayers\n4: displayReversePlayers\n5: findHighestHealth\n6: findLowestHealth\n7: findFirstHealthValue\n8: findAllHealthValue\n9: findLastName\n10: changePlayerHealth\n11: insertPlayerAtEnd\n";
	std::cout << std::endl;
	do
	{
		std::cin >> input;

		switch (input)
		{
		case 0:
			std::cout << "Exiting\n";
			break;
		case 1:
			sum = calculateSum();
			std::cout << "The sum of all the health is: " << sum << std::endl;
			std::cout << "\nWish to do another? (0 to exit)\n";
			break;
		case 2:
			avg = calculateAverage(sum);
			std::cout << "The average of all the health is: " << avg << std::endl;
			std::cout << "\nWish to do another? (0 to exit)\n";
			break;
		case 3:
			displayPlayers();
			std::cout << "\nWish to do another? (0 to exit)\n";
			break;
		case 4:
			displayReversePlayers();
			std::cout << "\nWish to do another? (0 to exit)\n";
			break;
		case 5:
			findHighestHealth();
			std::cout << "\nWish to do another? (0 to exit)\n";
			break;
		case 6:
			findLowestHealth();
			std::cout << "\nWish to do another? (0 to exit)\n";
			break;
		case 7:
			std::cout << "Enter a health value\n";
			std::cin >> value;
			indexPos = findFirstHealthValue(value);
			if (indexPos == -1)
			{
				std::cout << "Health not found\n";
			}
			else
			{
				std::cout << "Health value " << value << " found at position " << indexPos << " in the array\n";
			}
			std::cout << "\nWish to do another? (0 to exit)\n";
			break;
		case 8:
			std::cout << "Enter a health value\n";
			std::cin >> value;
			message = findAllHealthValue(value);
			std::cout << message << "\n";
			std::cout << "\nWish to do another? (0 to exit)\n";
			break;
		case 9:
			std::cout << "Enter a name to search for (case sensitive)\n";
			std::cin >> name;
			indexPos = findLastName(name);
			if (indexPos == -1)
			{
				std::cout << "Player " << name << " was not found in the array\n";
			}
			else
			{
				std::cout << "Name '" << name << "' found at position " << indexPos << " in the array\n";
			}
			std::cout << "\nWish to do another? (0 to exit)\n";
			break;
		case 10:
			std::cout << "Please enter a player's name to edit their health\n";
			std::cin >> name;
			indexPos = changePlayerHealth(name); // function call
			if (indexPos == -1)
			{
				std::cout << "Player was not found in the array\n";
			}
			else
			{
				std::cout << "Player health updated\n";
			}
			std::cout << "\nWish to do another? (0 to exit)\n";
			break;
		case 11:
			std::cout << "Enter the name of the new player\n";
			std::cin >> name;
			std::cout << "Enter their health\n";
			std::cin >> newHealth;
			indexPos = insertPlayerAtEnd(name, newHealth); // function call
			if (indexPos == -1)
			{
				std::cout << "Array is full\n";
			}
			else
			{
				std::cout << "Player with health: " << newHealth << ", named: " << name << " added to array at position " << indexPos << std::endl;
			}
			std::cout << "\nWish to do another? (0 to exit)\n";
			break;
		default:
			std::cout << "Error, Invalid Input\n";
			break;
		}
	} while (input != 0);
	system("Pause");
	return 0;
}

/// <summary>
/// Initialising the arrays
/// </summary>

void initialiseArrays()
{
	namesArray[0] = "Tom";
	namesArray[1] = "Sam";
	namesArray[2] = "Ann";
	namesArray[3] = "Kai";
	namesArray[4] = "Joe";
	namesArray[5] = "Ray";
	namesArray[6] = "Dave";
	namesArray[7] = "Sue";

	healthArray[0] = 3;
	healthArray[1] = 6;
	healthArray[2] = 2;
	healthArray[3] = 1;
	healthArray[4] = 4;
	healthArray[5] = 6;
	healthArray[6] = 1;
	healthArray[7] = 6;
}

/// <summary>
/// Used to calculate the sum of the numbers in the health array
/// </summary>
/// <returns> Returns the sum value to be displayed in main </returns>

float calculateSum()
{
	float sum = 0.0f;

	for (int index = 0; index < noOfPlayers; index++)
	{
		sum = sum + healthArray[index];
	}
	return sum;
}

/// <summary>
/// Calculates the average of the numbers in the health array
/// </summary>
/// <returns> Returns the value of the average to be displayed in the main </returns>

float calculateAverage(float t_sum)
{
	float avg = 0.0f;

	avg = t_sum / noOfPlayers;

	return avg;
}

/// <summary>
/// Used to display player names and health values
/// </summary>

void displayPlayers()
{
	std::string message = " ";

	for (int index = 0; index < noOfPlayers; index++)
	{
		message = "Player " + namesArray[index] + " has health of " + std::to_string(healthArray[index]); // concatinating
		std::cout << message << std::endl;
	}
}

/// <summary>
/// Displays the names and health of the players in reverse order
/// </summary>

void displayReversePlayers()
{
	std::string message = " ";

	for (int index = (noOfPlayers - 1); index >= 0; index--)
	{
		message = "Player " + namesArray[index] + " has health of " + std::to_string(healthArray[index]); // concatinating
		std::cout << message << std::endl;
	}
}

/// <summary>
/// Used to find the last person with the highest health
/// The ">=" in the if statement is used to rewrite the current highest if it is equal to the current highest
/// </summary>

void findHighestHealth()
{
	int highest = 0;
	std::string message = " ";

	for (int index = 0; index < noOfPlayers; index++)
	{
		if (healthArray[index] >= highest)
		{
			highest = healthArray[index];
			message = "Player " + namesArray[index] + " has the highest health of " + std::to_string(healthArray[index]); // concatinating
		}
	}
	std::cout << message << std::endl;
}

/// <summary>
/// Used to find the first person with the lowest health
/// </summary>

void findLowestHealth()
{
	int lowest = 10;
	std::string message = " ";

	for (int index = 0; index < noOfPlayers; index++)
	{
		if (healthArray[index] < lowest)
		{
			lowest = healthArray[index];
			message = "Player " + namesArray[index] + " has the lowest health of " + std::to_string(healthArray[index]); // concatinating
		}
	}
	std::cout << message << std::endl;
}

/// <summary>
/// used to find a health value that is equal to user input
/// </summary>
/// <param name="t_value"> Gained from user input for the health value they wish to search for </param>
/// <returns> returns the pos for error checking, -1 when error </returns>

int findFirstHealthValue(int t_value)
{
	int pos = 0;
	bool found = false;

	for (int index = 0; index < noOfPlayers; index++)
	{
		if (healthArray[index] == t_value)
		{
			pos = index;
			found = true;
			break; // breaks out when first instance is found
		}
	}

	if (!found) // error checking on if it was found or not
	{
		return -1;
	}
	else
	{
		return pos;
	}
}

/// <summary>
/// Finds all instances of the health value inputed by the user
/// </summary>
/// <param name="t_value"> Gained from user input to find what health value they want to find </param>
/// <returns> Returns the message string to be displayed in main </returns>

std::string findAllHealthValue(int t_value)
{
	std::string message = " ";
	int value = 0;
	value = t_value;
	bool found = false;

	for (int index = 0; index < noOfPlayers; index++)
	{
		if (healthArray[index] == value)
		{
			message = message + namesArray[index] + " ";
			found = true;
		}
	}

	if (!found) // error checking on if the value wasn't found
	{
		message = "No player found with that health value";
	}
	else
	{
		message = "Players" + message + "have the health value " + std::to_string(value);
	}
	return message;
}

/// <summary>
/// Using this to find the last appearance of a user inputed name
/// </summary>
/// <param name="t_name"> Used to find which name the user wants to find </param>
/// <returns> returns the pos for error checking, -1 when error </returns>

int findLastName(std::string t_name)
{
	int pos = 0;

	for (int index = noOfPlayers - 1; index >= 0; index--)
	{
		if (namesArray[index] == t_name)
		{
			pos = index;
			break;
		}
		else
		{
			pos = -1;
		}
	}
	return pos;
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

	for (index = 0; index < noOfPlayers; index++)
	{
		if (t_aName == namesArray[index])
		{
			std::cout << "Edit the players health\n";
			std::cin >> healthArray[index];

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
		pos = healthArray[index];
		return pos;
	}
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
	if (noOfPlayers == MAX_PLAYERS)
	{
		pos = -1;
	}
	else
	{
		// noOfPlayers = 7
		namesArray[noOfPlayers] = t_aName;
		healthArray[noOfPlayers] = t_newHealth;
		noOfPlayers++; // changes noOfPlayers to 8 to match with the updated list
	}
	return pos;
}