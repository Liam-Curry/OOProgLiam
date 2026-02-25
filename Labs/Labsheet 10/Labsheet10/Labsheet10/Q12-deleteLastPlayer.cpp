// Liam Curry
// c00311724
// 28-01-2026
// --------------------------------------------------------------
// Labsheet 10, Question 12: Deleting player in array
// Time Taken: 0 hours 25 minutes
// --------------------------------------------------------------
// Known Bugs: No error checking on numbers or control characters

#include <iostream>
#include <string>

const int MAX_PLAYERSV7 = 8;
int noOfPlayersV7 = 8;
std::string namesArrayV7[MAX_PLAYERSV7];
int healthArrayV7[MAX_PLAYERSV7];

// Declaring functions
void initialiseArraysV7();
int deleteLastPlayer();

int mainQ12()
{
	int pos = 0;
	std::string confirm = " ";
	initialiseArraysV7(); // function call

	do
	{
		std::cout << "Do you wish to delete a player?\n"; // checking if the user wishing to delete a player
		std::cin >> confirm;
		
		if (confirm == "yes" || confirm == "Yes")
		{
			pos = deleteLastPlayer(); // function call

			// error checking using -1
			if (pos == -1)
			{
				std::cout << "Player cannot be deleted, array is empty\n";
				break;
			}
			else
			{
				std::cout << "Player deleted\n";
			}
		}
	
	}while (confirm == "yes" || confirm == "Yes"); // keeps looping while user wants to delete players

	system("Pause");
	return 0;
}

void initialiseArraysV7()
{
	namesArrayV7[0] = "Tom";
	namesArrayV7[1] = "Sam";
	namesArrayV7[2] = "Ann";
	namesArrayV7[3] = "Kai";
	namesArrayV7[4] = "Joe";
	namesArrayV7[5] = "Ray";
	namesArrayV7[6] = "Dave";
	namesArrayV7[7] = "Sue";

	healthArrayV7[0] = 3;
	healthArrayV7[1] = 6;
	healthArrayV7[2] = 2;
	healthArrayV7[3] = 1;
	healthArrayV7[4] = 4;
	healthArrayV7[5] = 6;
	healthArrayV7[6] = 1;
	healthArrayV7[7] = 6;
}

int deleteLastPlayer()
{
	int pos = 1;

	if(noOfPlayersV7 > 0)
	{
		noOfPlayersV7--;
	}
	else
	{
		pos = -1;
	}
	return pos;
}