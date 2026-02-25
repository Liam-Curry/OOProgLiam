// Liam Curry
// c00311724
// 21-01-2026
// -------------------------------------------------------------------
// Labsheet 10, Question 9: Finding a certain name in the array
// Time Taken: 0 hours 25 minutes
// -------------------------------------------------------------------
// Known Bugs: No error checking on numbers or spelling/capitalisation

/*#include <iostream>
#include <string>

const int MAX_PLAYERSV4 = 8;
int noOfPlayersV4 = 8;
std::string namesArrayV4[MAX_PLAYERSV4];
int healthArrayV4[MAX_PLAYERSV4];

// Declaring functions
void initialiseArraysV4();
int findLastName(std::string t_name);

int mainQ9()
{
	std::string name = " ";
	int indexPos = 0;

	initialiseArraysV4(); // calling function

	std::cout << "Enter a name to search for (case sensitive)\n";
	std::cin >> name;
	indexPos = findLastName(name);
	
	// return -1 if error
	if (indexPos == -1)
	{
		std::cout << "Player " << name << " was not found in the array\n";
	}
	else
	{
		std::cout << "Name '" << name << "' found at position " << indexPos << " in the array\n";
	}
	system("Pause");
	return 0;
}

/// <summary>
/// Using this to find the last appearance of a user inputed name
/// </summary>
/// <param name="t_name"> Used to find which name the user wants to find </param>
/// <returns> returns the pos for error checking, -1 when error </returns>

int findLastName(std::string t_name)
{
	int pos = 0;

	for (int index = noOfPlayersV4-1; index >= 0; index--)
	{
		if (namesArrayV4[index] == t_name)
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
/// Initialising the arrays
/// </summary>

void initialiseArraysV4()
{
	namesArrayV4[0] = "Tom";
	namesArrayV4[1] = "Sam";
	namesArrayV4[2] = "Ann";
	namesArrayV4[3] = "Kai";
	namesArrayV4[4] = "Joe";
	namesArrayV4[5] = "Ray";
	namesArrayV4[6] = "Dave";
	namesArrayV4[7] = "Sue";

	healthArrayV4[0] = 3;
	healthArrayV4[1] = 6;
	healthArrayV4[2] = 2;
	healthArrayV4[3] = 1;
	healthArrayV4[4] = 4;
	healthArrayV4[5] = 6;
	healthArrayV4[6] = 1;
	healthArrayV4[7] = 6;
}*/