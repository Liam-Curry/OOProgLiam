// Liam Curry
// c00311724
// 19-11-2025
// Labsheet 9, Displaying 10 random EVEN numbers between 10 and 50
// Time Taken: 0 hours, 15 minutes
// Known Bugs: None

#include <iostream>
#include <cstdlib>
#include <ctime>

int generateRandomEven(); // declaring function

int mainQ4()
{
	std::srand(std::time(nullptr)); // setting the seed for random numbers
	
	int sum = 0;
	
	sum = generateRandomEven(); // calling function

	std::cout << std::endl << "Your sum is: " << sum << std::endl;

	system("Pause");
	return 0;
}

/// Function is used to generate 10 random EVEN numbers
/// 2*rand is to return an even number
/// numCap++ is to control the loop
/// returns the sum to the main to then display it

int generateRandomEven()
{
	int numCap = 1;
	int sum = 0;
	int numberGen = 0;
	int checkMod = 0;

	while (numCap <= 10)
	{
		numberGen = ((rand() % 40) + 11); 
		checkMod = numberGen % 2;

		if (checkMod == 0)
		{
			std::cout << numberGen << " ";
			sum = sum + numberGen;
			numCap++;
		}
	}
	return sum;
}