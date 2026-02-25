// Liam Curry
// c00311724
// 19-01-2026
// ------------------------------------------------------------------------------
// Labsheet 10, Question 1: Random numbers in an Array displayed 3 different ways
// Time Taken: 0 hours 10 minutes
// ------------------------------------------------------------------------------
// Known Bugs: None

#include <iostream>
#include <cstdlib>
#include <ctime>

int mainQ1()
{
	const int MAX_NUMS = 10;
	int number[MAX_NUMS]; // declaring array

	std::srand(std::time(nullptr)); // setting the randomiser seed

	std::cout << "Array 1: ";

	for (int count = 0; count < MAX_NUMS; count++) // used to display in forwards order
	{
		number[count] = (rand() % 15) + 8; // randomised 8-22
		std::cout << number[count] << " ";
	}

	std::cout << "\nArray 2: ";

	for (int count2 = (MAX_NUMS-1); count2 >= 0; count2--) // used to display in backwards order
	{
		std::cout << number[count2] << " ";
	}

	std::cout << "\nArray 3: ";

	for (int count3 = 0; count3 < MAX_NUMS; count3 += 2) // used to display in forwards order but every second number
	{
		std::cout << number[count3] << " ";
	}
	std::cout << std::endl;
	system("Pause");
	return 0;
}