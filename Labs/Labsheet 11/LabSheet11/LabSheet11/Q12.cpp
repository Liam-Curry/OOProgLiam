// Liam Curry
// c00311724
// 04-02-2026
// Time taken: 0 hours 5 minutes
// --------------------------------------
// Labsheet 11, Q12: Does the code work?
// --------------------------------------
// Known bugs: Yes, read bottom

#include <iostream>
#include <string>

void findaPlayer(std::string t_name, std::string t_nameArray[], double t_scoreArray[], int t_MAX_ITEMS);

const int MAX_PLAYERV3 = 10;

int mainQ12()
{
	int noOfPlayers = 8;
	std::string playerNames[MAX_PLAYERV3];
	double playerScores[] = { 3.4, 5.2, 5.4, 8.3, 10, 4.1, 3.5, 4.5, 0, 0 };

	findaPlayer("Cian", playerNames, playerScores, noOfPlayers);

	system("Pause");
	return 0;
}

void findaPlayer(std::string t_name, std::string t_nameArray[], double t_scoreArray[], int t_MAX_ITEMS)
{
	int index = t_MAX_ITEMS;

	for (; index > 0; index--)
	{
		if (t_name == t_nameArray[index])
		{
			std::cout << "Found name: " << t_nameArray[index];
			std::cout << "Player score:" << t_scoreArray[index];
			std::cout << "at index position: " << index;
		}
	}
}

// The code is supposed to search through the array backwards to find someone by the name "Cian"
// The code fails do this for a few reasons
// 1: The index fails to reach 0, which means it missing a cell
// As of writing i think that is the only error in this code, not counting the name array not having any values