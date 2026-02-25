// Liam Curry
// c00311724
// 04-02-2026
// Time taken: 0 hours 5 minutes
// ------------------------------------------------------------------------------
// Labsheet 11, Q10: Does this work? What does it do? What is wrong with it?
// ------------------------------------------------------------------------------
// Known bugs: Yes, read bottom

#include <iostream>
#include <string>

const int MAX_PLAYER = 10;
void calAverageScore(double t_array[], int t_MAX_ITEMS);

int mainQ10()
{
	int noOfPlayers = 8;
	double avg = 0;

	std::string playerNames[MAX_PLAYER];
	double playerScores[] = { 3.4, 5.2, 5.4, 8.3, 10, 4.1, 3.5, 4.5, 0, 0 };

	calAverageScore(playerScores, noOfPlayers);
	std::cout << "The average score is " << avg << std::endl;

	system("Pause");
	return 0;
}

void calAverageScore(double t_array[], int t_MAX_ITEMS)
{
	double total = 0;
	double avg = 0;

	for (int index = 1; index <= t_MAX_ITEMS; index++)
	{
		total = total + t_array[index];
	}
	avg = total / t_MAX_ITEMS;
}

// The code's main purpose is to take the numbers from the array and to get the average of them
// The code fails to do this is a few ways
// 1: The index in the for loop starts at 1 instead of 0
// 2: The function doesn't return a value, and pass by address is NOT being used
// 3: The function isn't being assigned to avg in main, so 0 will be displayed instead
// 4: Adding on to 3, the function is void, which means nothing is returned in the first place
// 5: The loop controller "t_MAX_ITEMS" is done wrong as it will then attempt to access a cell that doesn't exist

// What I'd do to fix it:
// 1: Set index in the for loop to 0
// 2: Make sure the function returns a value: By changing the function to a double and making it return "avg" ..
//											  and making the function become assigned to avg in main to then be displayed
// 3: I will then also fix the loop controller to then be "index < t_MAX_ITEMS" so it doesn't attempt to access.. 
//    an outside of loop value