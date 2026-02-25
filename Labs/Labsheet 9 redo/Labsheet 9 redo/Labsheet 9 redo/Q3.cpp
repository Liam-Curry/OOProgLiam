// Liam Curry
// c00311724
// 14-01-2026
// Labsheet 9, Q3: Displaying random numbers from 1 to 40
// Time Taken: 0 hours, 10 minutes
// Known Bugs: None

#include <iostream>
#include <cstdlib>
#include <ctime>

void generateRandom(); // declaring function

int mainQ3()
{
	std::srand(std::time(nullptr)); // setting the seed for random generation

	generateRandom(); // calling function

	system("Pause");
	return 0;
}

/// This function uses a for loop to generate 10 random numbers from 1 to 40 and the sum of those numbers
/// The for loop starts at 1 and ends at 10, going up in steps of 1
/// It then displayes to total sum of the generated numbers and displays it

void generateRandom()
{
	int numberGen = 0;
	int sum = 0;

	for (int count = 1; count <= 10; count++)
	{
		numberGen = (rand() % 40) + 1; // randomises from 1 to 40
		std::cout << numberGen << " ";
		sum = sum + numberGen;
	}
	std::cout << "\nThe total sum of the numbers generated is: " << sum << std::endl;
}