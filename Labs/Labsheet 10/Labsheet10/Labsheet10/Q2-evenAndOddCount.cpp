// Liam Curry
// c00311724
// 19-01-2026
// ----------------------------------------------------------------------
// Labsheet 10, Question 2: Counting Even and Odd numbers inputed by user
// Time Taken: 0 hours 15 minutes
// ----------------------------------------------------------------------
// Known Bugs: No error checking on letters or control characters

#include <iostream>

int mainQ2()
{
	const int MAX_NUMS = 9;
	float numbers[MAX_NUMS];
	int modCheck = 0;
	int evenCount = 0;
	int oddCount = 0;
	int input = 0;

	std::cout << "Enter the numbers you wish to enter into the array:\n";

	for (int count = 0; count < MAX_NUMS; count++) // loop for user input
	{
		std::cin >> numbers[count];
		input = numbers[count]; // to make mod check work

		modCheck = input % 2; // to check for even

		if (modCheck == 0)
		{
			evenCount++; // increases when even
		}
		else
		{
			oddCount++; // increases when odd
		}
	}

	std::cout << "There are/is " << evenCount << " even number(s) and " << oddCount << " odd number(s)\n";

	system("Pause");
	return 0;
}