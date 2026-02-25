// Liam Curry
// c00311724
// 21-01-2026
// ----------------------------------------------------------------------------------------------
// Labsheet 10, Question 8: Modifying question 6 to find all instances of an inputed health value
// Time Taken: 0 hours 20 minutes
// ----------------------------------------------------------------------------------------------
// Known Bugs: No error checking on control characters or letters

/*#include <iostream>
#include <string>

const int MAX_PLAYERSV3 = 8;
int noOfPlayersV3 = 8;
std::string namesArrayV3[MAX_PLAYERSV3];
int healthArrayV3[MAX_PLAYERSV3];

// Declaring functions
void initialiseArraysV3();
std::string findAllHealthValue(int t_value);

int mainQ8()
{
	int value = 0;
	std::string message = " ";

	initialiseArraysV3(); // calling function

	std::cout << "Enter a health value\n";
	std::cin >> value;

	message = findAllHealthValue(value);
	std::cout << message << std::endl;

	system("Pause");
	return 0;
}

/// <summary>
/// Initialising arrays
/// </summary>

void initialiseArraysV3()
{
	namesArrayV3[0] = "Tom";
	namesArrayV3[1] = "Sam";
	namesArrayV3[2] = "Ann";
	namesArrayV3[3] = "Kai";
	namesArrayV3[4] = "Joe";
	namesArrayV3[5] = "Ray";
	namesArrayV3[6] = "Dave";
	namesArrayV3[7] = "Sue";

	healthArrayV3[0] = 3;
	healthArrayV3[1] = 6;
	healthArrayV3[2] = 2;
	healthArrayV3[3] = 1;
	healthArrayV3[4] = 4;
	healthArrayV3[5] = 6;
	healthArrayV3[6] = 1;
	healthArrayV3[7] = 6;
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

	for (int index = 0; index < noOfPlayersV3; index++)
	{
		if (healthArrayV3[index] == value)
		{
			message = message + namesArrayV3[index] + " ";
			found = true;
		}
	}

	if (!found) // error checking on if the value wasn't found
	{
		message = "No player found with that health value";
	}
	else
	{
		message = "Players" + message +  "have the health value " + std::to_string(value);
	}
	return message;
}*/