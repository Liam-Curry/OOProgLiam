// Liam Curry
// c00311724
// 14-01-2026
// Labsheet 9, Q4: Generating 10 random even numbers from 10 to 50
// Time Taken: 0 hours, 10 minutes
// Known Bugs: None

#include <iostream>
#include <cstdlib>
#include <ctime>

int generateRandomEven(); // declaring function

int mainQ4()
{
	int sum = 0;

	std::srand(std::time(nullptr)); // setting the seed

	sum = generateRandomEven(); // calling the function

	std::cout << "\nThe total sum of the numbers generated is: " << sum << std::endl;

	system("Pause");
	return 0;
}

/// This function generates 10 random even numbers from between 10 and 50
/// modCheck is used to check for if the numbers are even or not
/// It returns the sum to the main to then be displayed inside the main

int generateRandomEven()
{
	int sum = 0;
	int numberGen = 0;
	int modCheck = 0;
	int count = 1;

	while (count <= 10)
	{
		numberGen = (rand() % 41) + 10; // from 10 to 50

		modCheck = numberGen % 2;

		if (modCheck == 0)
		{
			std::cout << numberGen << " ";
			sum = sum + numberGen;
			count++;
		}
	}
	return sum;
}