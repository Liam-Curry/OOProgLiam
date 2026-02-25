// Liam Curry
// c00311724
// 25-11-2025
// Labsheet 9, Finding the sum, highest, lowest and average of the number of numbers inputted by the user
// Time Taken: 0 hours, 20 minutes
// Known Bugs: No error checking on letters or control characters

#include <iostream>

float calculateNum(int t_maxNum); // declaring function

int mainQ7()
{
	int maxNum = 0;
	float avg = 0;

	std::cout << "Please enter the total amount of numbers you wish to enter\n";
	std::cin >> maxNum;

	while (maxNum <= 0) // while loop to error check and force re-entry
	{
		std::cout << "Error, must be a value above 0\n";
		std::cout << "Please re-enter your value\n";
		std::cin >> maxNum;
	} // end while
	
	avg = calculateNum(maxNum); // calling function
	std::cout << "Your average is: " << avg << std::endl;

	system("Pause");
	return 0;
}

/// function used to gain user input
/// then gets the sum, the highest, the lowest, and the average of those numbers
/// t_maxNum is taken to control the loop with the max amount of numbers the user wants
/// returns the average to then be displayed in the main

float calculateNum(int t_maxNum)
{
	float sum = 0;
	int largest = 0;
	int smallest = 15; // setting a default for the lowest number
	int count = 1;
	float avg = 0;
	int num = 0;

	while (count <= t_maxNum) // start loop
	{
		std::cout << "\nEnter your numbers (between 5 and 15)\n"; // gaining user input
		std::cin >> num;

		if (num < 5 || num >15) // error checking
		{
			std::cout << "Error, must be between 5 and 15\n\n";
		}
		else // used to find sum and the highest/lowest
		{
			sum = sum + num;

			if (num > largest)
			{
				largest = num;
			}
			if (num < smallest)
			{
				smallest = num;
			}
			count++; // controls loop
		}
	} // end loop
	std::cout << "Your sum is: " << sum << std::endl;
	std::cout << "Your smallest number is: " << smallest<< std::endl;
	std::cout << "Your largest number is: " << largest << std::endl;

	avg = sum / t_maxNum; // calculates average

	return avg;
}