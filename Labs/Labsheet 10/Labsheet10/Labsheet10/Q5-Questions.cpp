// Liam Curry
// c00311724
// 19-01-2026
// --------------------------------------------------------------
// Labsheet 10, Question 5: Questions
// Time Taken: 0 hours 5 minutes
// --------------------------------------------------------------
// Known Bugs: No error checking on letters or control characters

// You can store 6 strings in the array

// When they are initilised as the way they are in the question the strings do not have any value, see below

#include <iostream>
#include <string>

/// <summary>
/// Used to demonstrate above answer
/// </summary>

int mainQ5()
{
	std::string temporaryItems[6];

	for (int count = 0; count < 6; count++)
	{
		std::cout << temporaryItems[count];
	}
	system("Pause");
	return 0;
}