// Liam Curry
// c00311724
// 04-02-2026
// Time taken: 0 hours 5 minutes
// ---------------------------------------------------------------
// Labsheet 11, Q16: Does this code work?
// ---------------------------------------------------------------
// Known bugs: No error checking on letters or control characters

#include <iostream>

int findLowest(int t_array[], const int t_numOfNums);

int mainQ16()
{
	const int NUMBER_OF_NUMBERS = 7;
	int numArray[NUMBER_OF_NUMBERS];
	int lowestNumber = 0;

	numArray[0] = 4;
	numArray[1] = 1;
	numArray[2] = 7;
	numArray[3] = 4;
	numArray[4] = 5;
	numArray[5] = 9;
	numArray[6] = 3;

	lowestNumber = findLowest(numArray, NUMBER_OF_NUMBERS);

	std::cout << "The lowest number in the array is " << lowestNumber << std::endl;

	system("Pause");
	return 0;
}

int findLowest(int t_array[], const int t_numOfNums)
{
	int lowestNum = 0;
	if (t_numOfNums > 0)
	{
		int lowestNum = t_array[0];
	}

	for (int i = 0; i < t_numOfNums; i++)
	{
		if (t_array[i] < lowestNum)
		{
			lowestNum = t_array[i];
		}
	}
	return lowestNum;
}

// This code is having an issue inside the function itself
// Inside the if statement, it is creating a new "lowestNum" variable, which keeps the old one at 0
// This practically screws over the whole code so it doesn't work properly and will always return a 0