// Liam Curry
// c00311724
// 04-02-2026
// Time taken: 0 hours 10 minutes
// --------------------------------------
// Labsheet 11, Q11: Does the code work?
// --------------------------------------
// Known bugs: Yes, read bottom

#include <iostream>
#include <string>

void displayPlayerDetails(std::string t_nameArray[], double t_scoreArray[], int t_MAX_ITEMS);

const int MAX_PLAYERV2 = 10;

int mainQ11()
{
	int noOfPlayers = 8;
	std::string playerNames[MAX_PLAYERV2];
	double playerScores[] = { 3.4, 5.2, 5.4, 8.3, 10, 4.1, 3.5, 4.5, 0, 0 };

	displayPlayerDetails(playerNames, playerScores, noOfPlayers);

	system("Pause");
	return 0;
}

void displayPlayerDetails(std::string t_nameArray[], double t_scoreArray[], int t_MAX_ITEMS)
{
	std::cout << "The player names and their scores are: ";

	for (int index = 0; index <= t_MAX_ITEMS; index + 2)
	{
		std::cout << "Player name: " << t_nameArray[index];
		std::cout << " Player score: " << t_scoreArray[index];
	}
}

// The code is supposed to search through the whole array and display all player names and scores
// This does not work for a few reasons
// 1: "index <= t_MAX_ITEMS" is not proper and will attempt to search for a cell outside of the array
// 2: "index + 2" does not work and will not increment
// Other than those 2 errors it seems to work just fine