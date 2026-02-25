// Liam Curry
// c00311724
// 12-01-2026
// Labsheet 9, Fixing code that is random 1 - 100
// Time Taken: 0 hours, 15 minutes
// Known Bugs: No error checking on letters or control characters

#include <iostream>

void funcRand(); // declaring function

int mainQ15()
{
	std::srand(std::time(nullptr)); // setting seed
	funcRand(); // calling function

	system("Pause");
	return 0;
}

/// Function used to generate a random even number from 1 to 100

void funcRand()
{
	int count = 1;
	int checkEven = 0;
	int sum = 0;

	while (count <= 10)
	{
		int numberGuess = (rand() % 100) + 1; // 1 to 100

		checkEven = numberGuess % 2; // checking if the number is even

		if (checkEven == 0)
		{
			std::cout << numberGuess << " ";
			sum = sum + numberGuess;
			count++;
		} // end if
	} // end while

	std::cout << std::endl;
	std::cout << "The sum of all the numbers is " << sum << std::endl;
}

// The main thing that I have changed about the example givin is to make it into a function
// Other than that the code given works perfectly fine
// I have also changed the name of the "step" variable to "count", but thats just personal preference
// I also changed the space to be after the number instead of before for visual sake