// Liam Curry
// c00311724
// 04-02-2026
// Time taken: 0 hours 30 minutes
// ------------------------------------------------------------------------------
// Labsheet 11, Q6: Find player name
//				Q7: Find player score
//				Q8: Find Score Details
//				Q9: Change Player Score
// ------------------------------------------------------------------------------
// Known bugs: No error checking on numbers, capitalisation or control characters

#include <iostream>
#include <string>

// Declaring functions
std::string findPlayerName(std::string t_aName, std::string t_playerNames[], int t_playerScores[], int t_noOfPlayers);
std::string findPlayerScore(int t_score, std::string t_playerNames[], int t_playerScores[], int t_noOfPlayers);
std::string findScoreDetails(int t_min, int t_max, std::string t_playerNames[], int t_playerScores[], int t_noOfPlayers);
int changePlayerScore(std::string t_aName, std::string t_playerNames[], int t_playerScores[], int t_noOfPlayers);

const int MAX_PLAYERS = 10; // global value

int mainQ6to9()
{
	// Variables and arrays
	std::string playerNames[MAX_PLAYERS] = { "David", "Jake", "Aoife", "Ki", "Joe", "Ray", "Dave", "Sue" };
	int playerScores[MAX_PLAYERS] = { 75, 65, 25 ,35, 40, 80, 55, 65 };
	int noOfPlayers = 8;
	std::string aMessage = " ";

	//input related variables
	std::string aName = " ";
	int score = 0;
	int input = 0;
	int min = 0;
	int max = 0;
	int indexPos = 0;

	std::cout << "Menu\n\n1: findPlayerName\n2: findPlayerScore\n3: findScoreDetails\n4: changePlayerScore\n0: Exit\n";

	// for menu on inputs
	do
	{
		std::cout << "\nEnter your choice\n";
		std::cin >> input;
		std::cout << std::endl;
		switch (input)
		{
		case 0:
			// Displays when exiting
			std::cout << "Exiting\n";
			break;
		case 1:
			std::cout << "Enter a players name\n";
			std::cin >> aName; 
			aMessage = findPlayerName(aName, playerNames, playerScores, noOfPlayers); // Calling function
			std::cout << aMessage << "\n"; // Displays message
			break;
		case 2:
			std::cout << "Enter a players score\n";
			std::cin >> score;
			aMessage = findPlayerScore(score, playerNames, playerScores, noOfPlayers); // Calling function
			std::cout << aMessage << "\n"; // Displays message
			break;
		case 3:
			std::cout << "Enter min range for score\n";
			std::cin >> min;
			std::cout << "Enter max range for score\n";
			std::cin >> max;
			aMessage = findScoreDetails(min, max, playerNames, playerScores, noOfPlayers); // Calling function

			// Error checking on returned message
			if (aMessage == " ")
			{
				std::cout << "No players in that range\n"; // Displays message
			}
			else
			{
				std::cout << aMessage << "\n"; // Displays message
			}

			break;
		case 4:
			std::cout << "Enter the name of the player\n";
			std::cin >> aName;
			indexPos = changePlayerScore(aName, playerNames, playerScores, noOfPlayers); // Function call
			std::cout << "Player score at index " << indexPos << " changed\n"; // Displays message
			break;
		default:
			// Error check if an invalid number is input
			std::cout << "Not a valid choice, please choose again\n";
			break;
		}
	} while (input != 0);
	// switches on input, exits when 0 is inputted

	system("Pause");
	return 0;
}

/// Question 6
/// <summary>
/// Function used to attempt to find the player with the matching name
/// </summary>
/// <param name="t_aName"> Name entered by user to search for </param>
/// <param name="t_playerNames"> Array of player names </param>
/// <param name="t_playerScores"> Array of player scores </param>
/// <param name="t_noOfPlayers"> Used to control for loop so it doesn't go outside the range </param>
/// <returns> Returns message to main for when user is/isn't found </returns>

std::string findPlayerName(std::string t_aName, std::string t_playerNames[], int t_playerScores[], int t_noOfPlayers)
{
	std::string aMessage = "No player found with that name";
	// Declaring with this for when no player found

	for (int index = 0; index < t_noOfPlayers; index++)
	{
		// Check on if the input name equals a name in the index
		if (t_aName == t_playerNames[index])
		{
			aMessage = "Player " + t_playerNames[index] + " has a score of " + std::to_string(t_playerScores[index]);
			return aMessage; // returns when found, as it's only looking for the first instance
		} // end if
	} // end for
	return aMessage;
}

/// Question 7
/// <summary>
/// Function used to search the array for the last instance of a certain score
/// </summary>
/// <param name="t_score"> Score to be searched for </param>
/// <param name="t_playerNames"> Array of player names </param>
/// <param name="t_playerScores"> Array of player scores </param>
/// <param name="t_noOfPlayers"> Used to control for loop so it doesn't go outside the range </param>
/// <returns> Returns message to main for when the score is/isn't found </returns>

std::string findPlayerScore(int t_score, std::string t_playerNames[], int t_playerScores[], int t_noOfPlayers)
{
	std::string aMessage = " ";

	for (int index = (t_noOfPlayers - 1); index >= 0; index--)
	{
		if (t_score == t_playerScores[index])
		{
			aMessage = "Player " + t_playerNames[index] + " has the score of " + std::to_string(t_score);
			return aMessage;
		} // end if
	} // end for
	return aMessage; // Empty string if score isnt found
}

/// Question 8
/// <summary>
/// Function used to find all the scores within a certain range from a user input
/// </summary>
/// <param name="t_min"> The min of the range </param>
/// <param name="t_max"> The max of the range </param>
/// <param name="t_playerNames"> Array of player names </param>
/// <param name="t_playerScores"> Array of player scores </param>
/// <param name="t_noOfPlayers"> Used to control for loop so it doesn't go outside the range </param>
/// <returns> Returns the message to main to be displayed </returns>

std::string findScoreDetails(int t_min, int t_max, std::string t_playerNames[], int t_playerScores[], int t_noOfPlayers)
{
	std::string aMessage = "";

	for (int index = 0; index < t_noOfPlayers; index++)
	{
		if (t_playerScores[index] >= t_min && t_playerScores[index] <= t_max)
		{
			aMessage = aMessage + "Player " + t_playerNames[index] + " has a score of " + std::to_string(t_playerScores[index]) + ", ";
		} // end if
	} // end for
	return aMessage;
}

/// Question 9
/// <summary>
/// Function used to search the array for the last instance of a certain name
/// It then changes the score of said player to what the user wishes
/// </summary>
/// <param name="t_aName"> Name of player the user wishes to search for </param>
/// <param name="t_playerNames"> Array of player names </param>
/// <param name="t_playerScores"> Array of player scores </param>
/// <param name="t_noOfPlayers"> Used to control for loop so it doesn't go outside the range </param>
/// <returns> Returns the index position to main to be displayed </returns>

int changePlayerScore(std::string t_aName, std::string t_playerNames[], int t_playerScores[], int t_noOfPlayers)
{
	int indexPos = -1; // for if no player found
	for (int index = (t_noOfPlayers - 1); index >= 0; index--)
	{
		if (t_aName == t_playerNames[index])
		{
			std::cout << "Enter the new score\n";
			std::cin >> t_playerScores[index];
			indexPos = index; // to get the index to be returned
		} // end if
	} // end for
	return indexPos;
}