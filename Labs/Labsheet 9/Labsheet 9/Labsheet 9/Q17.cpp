// Liam Curry
// c00311724
// 12-01-2026
// Labsheet 9, "What does this code do?"
// Time Taken: 0 hours, 0 minutes
// Known Bugs: No error checking on letters or control characters

#include <iostream>

int mainQ17()
{
	int count = 1;
	double sum = 0;
	int numberGuess = -1;
	int quantityNum = 0;
	double average = 0;
	int lowestNum = 0;
	int highestNum = 0;

	std::cout << std::endl << "Please enter the number of numbers you want\n";
	std::cin >> quantityNum;


	while (count <= quantityNum)
	{
		std::cout << std::endl << "Please enter a number (1-10)\n";
		std::cin >> numberGuess;

		if (numberGuess >= 1 || numberGuess <= 10)
		{
			if (numberGuess < lowestNum)
			{
				lowestNum = numberGuess;
			}
			if (numberGuess > highestNum)
			{
				highestNum = numberGuess;
			}
			sum = sum + numberGuess;
		}
		count++;
	}
	average = sum / quantityNum;

	std::cout << "The lowest of the numbers is " << lowestNum << std::endl;
	std::cout << "The highest of the numbers is " << highestNum << std::endl;
	std::cout << "The average of the numbers is " << average << std::endl;
	std::cout << "The sum of the numbers is " << sum << std::endl;

	system("Pause");
	return 0;
}


// The program takes in the amount of numbers the user wishes to enter and
// uses that to control the loop of the numbers the user enters.
// It then finds the lowest number and highest number
// along with finding the sum and average.