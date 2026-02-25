// Liam Curry
// c00311724
// 21-01-2026
// -----------------------------------------------------------------------------------------------
// Labsheet 10, Question 7: Modifying Question 6 to look for a specific health value on user input
// Time Taken: 0 hours 15 minutes
// -----------------------------------------------------------------------------------------------
// Known Bugs: No error checking on control characters or letters

/*#include <iostream>
#include <string>

const int MAX_PLAYERSV2 = 8;
int noOfPlayersV2 = 8;
std::string namesArrayV2[MAX_PLAYERSV2];
int healthArrayV2[MAX_PLAYERSV2];

// Declaring functions
void initialiseArraysV2();
int findFirstHealthValue(int t_value);

int mainQ7()
{
	int indexPos = 0;
	int value = 0;

	initialiseArraysV2(); // calling function

	std::cout << "Enter a health value\n";
	std::cin >> value;

	std::cout << std::endl;
	indexPos = findFirstHealthValue(value); // calling function

	// return -1 if error
	std::cout << "Health value " << value << " found at position " << indexPos << " in the array\n";

	system("Pause");
	return 0;
}

/// <summary>
/// Used to initialise the arrays
/// </summary>

void initialiseArraysV2()
{
	namesArrayV2[0] = "Tom";
	namesArrayV2[1] = "Sam";
	namesArrayV2[2] = "Ann";
	namesArrayV2[3] = "Kai";
	namesArrayV2[4] = "Joe";
	namesArrayV2[5] = "Ray";
	namesArrayV2[6] = "Dave";
	namesArrayV2[7] = "Sue";

	healthArrayV2[0] = 3;
	healthArrayV2[1] = 6;
	healthArrayV2[2] = 2;
	healthArrayV2[3] = 1;
	healthArrayV2[4] = 4;
	healthArrayV2[5] = 6;
	healthArrayV2[6] = 1;
	healthArrayV2[7] = 6;
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

	for (int index = 0; index < noOfPlayersV2; index++)
	{
		if (healthArrayV2[index] == t_value)
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
*/