// Liam Curry
// c00311724
// 04-02-2026
// Time taken: 0 hours 10 minutes
// -----------------------------------------------------------------------
// Labsheet 11, Q13: Adding a new player to the end of the array
// Labsheet 11, Q14: Removing a player
// -----------------------------------------------------------------------
// Known bugs: No error checking on numbers, letters or control characters

#include <iostream>
#include <string>

void insertNewPlayer(std::string t_newName, double t_newScore, std::string t_namesArray[], double t_scoresArray[], int &t_noOfPlayers);
void deleteLastPlayer(int &t_noOfPlayers);

const int MAX_PLAYERV4 = 10;

int mainQ1314()
{
	int noOfPlayers = 8;
	std::string playerNames[MAX_PLAYERV4] = { "David", "Jake", "Aoife", "Kai", "Joe", "Ray", "Dave", "Sue" };
	double playerScores[] = { 3.4, 5.2, 5.4, 8.3, 10, 4.1, 3.5, 4.5, 0, 0 };
	std::string newName = " ";
	double newScore = 0;
	int input = 0;

	std::cout << "1 for insert, 2 for delete\n";
	do
	{
		std::cin >> input;
		switch (input)
		{
		case 1:
			std::cout << "Enter new name\n";
			std::cin >> newName;
			std::cout << "Enter new score\n";
			std::cin >> newScore;
			insertNewPlayer(newName, newScore, playerNames, playerScores, noOfPlayers);
			break;
		case 2:
			deleteLastPlayer(noOfPlayers);
			std::cout << "Deleted\n";
			break;
		default:
			break;
		}
	} while (input != 0);
	system("Pause");
	return 0;
}

/// Question 13
/// <summary>
/// Function used to insert a new player
/// </summary>

void insertNewPlayer(std::string t_newName, double t_newScore, std::string t_namesArray[], double t_scoresArray[], int &t_noOfPlayers)
{
	t_namesArray[t_noOfPlayers] = t_newName;
	t_scoresArray[t_noOfPlayers] = t_newScore;
	t_noOfPlayers++;
}

/// Question 14
/// <summary>
/// Function used to delete the last player
/// </summary>

void deleteLastPlayer(int &t_noOfPlayers)
{
	t_noOfPlayers--;
}