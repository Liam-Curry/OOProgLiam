// Liam Curry
// c00311724
// 19-11-2025
// Labsheet 9, Displaying 10 random numbers between 1 and 40
// Time Taken: 0 hours, 20 minutes
// Known Bugs: None

#include <iostream>
#include <cstdlib>
#include <ctime>

void generateRandom(); // decalring function

int mainQ3()
{
	std::srand(std::time(nullptr)); // setting the seed for random numbers

	generateRandom();

	system("Pause");
	return 0;
}

/// function used to get 10 random numbers to then display them and get the sum
/// while loop to get 10 numbers 
/// numCap++ is used to control the loop

void generateRandom()
{
	int numCap = 1;
	int sum = 0;
	int numberGen = 0;

	while (numCap <= 10)
	{
		numberGen = (rand() % 40) + 1; // generating random number
		std::cout << numberGen << " ";
		sum = sum + numberGen;
		numCap++;
	}
	std::cout << std::endl << "Your sum is: " << sum << std::endl;
}