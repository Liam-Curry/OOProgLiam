// Liam Curry
// c00311724
// 14-01-2026
// Labsheet 9, Q5: Entering numbers from a given 
// Time Taken: 0 hours, 10 minutes
// Known Bugs: No error checking on letters or control characters

#include <iostream>

void calculateNumbers(int t_max); // declaring function

int mainQ5()
{
	int max = 0;

	std::cout << "How many numbers do you wish to use?\n";
	std::cin >> max;

	if (max <= 0) // error checking to see if the number entered is a valid number
	{
		std::cout << "Error - Number cannot be less than or equal to 0\n";
	}
	else
	{
		calculateNumbers(max); // function call
	}

	system("Pause");
	return 0;
}

/// This function finds the sum of the numbers entered and checks if they are odd
/// It also makes the sum of the odd numbers and counts how many were entered
/// It doesn't return anything to main
/// "t_max" is used to find out how many numbers the user wants to enter and stops once that has been fulfilled

void calculateNumbers(int t_max) 
{
	int num = 0;
	int sumOdd = 0;
	int modCheck = 0;
	int sum = 0;
	int oddCount = 0;

	std::cout << std::endl;

	for (int count = 1; count <= t_max; count++)
	{
		std::cout << "Please enter a number: ";
		std::cin >> num;

		sum = sum + num;

		modCheck = num % 2;

		if (modCheck == 1)
		{
			sumOdd = sumOdd + num;
			oddCount++;
		}
	}
	std::cout << std::endl;
	std::cout << "The total sum of all numbers entered is: " << sum;
	std::cout << "\nThe sum of all the Odd numbers entered is: " << sumOdd;
	std::cout << "\nThe amount of Odd numbers entered is: " << oddCount << std::endl;
}
