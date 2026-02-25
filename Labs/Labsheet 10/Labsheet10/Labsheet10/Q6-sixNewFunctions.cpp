/*// Liam Curry
// c00311724
// 21-01-2026
// ------------------------------------------------------------------
// Labsheet 10, Question 6: Adding 6 functions to given code + arrays
// Time Taken: 0 hours 45 minutes
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

int mainQ6()
{
	float sum = 0.0f;
	float avg = 0.0f;

	// function calls and message displays if needed
	initialiseArrays();
	sum = calculateSum();
	std::cout << "The sum of all the health is: " << sum << std::endl;

	avg = calculateAverage(sum);
	std::cout << "The average of all the health is: " << avg << std::endl;

	std::cout << std::endl;
	displayPlayers();

	std::cout << std::endl;
	displayReversePlayers();

	std::cout << std::endl;
	findHighestHealth();

	findLowestHealth();
	std::cout << std::endl;

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
}*/