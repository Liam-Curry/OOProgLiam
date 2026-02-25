// Liam Curry
// c00311724
// 26-11-2025
// Labsheet 9, Looping until a 0 is entered for a range of 5-12
// Time Taken: 0 hours, 15 minutes
// Known Bugs: No error checking on letters or control characters

#include <iostream>

int sumTotal(); // declaring function

int mainQ9()
{
	int sum = 0;
	sum = sumTotal(); // calling function
	std::cout << "\nYour total sum is: " << sum << std::endl;

	system("Pause");
	return 0;
}

/// used to create an infinite loop of entering numbers
/// 0 is used to end loop
/// while loops infinitely until count==0
/// returns sum to main

int sumTotal()
{
	int num = 0;
	int sum = 0;
	int count = 1;

	while (count > 0)
	{
		std::cout << "Enter a number: ";
		std::cin >> num;
		std::cout << std::endl;

		if (num == 0) // used to end loop if 0 is entered
		{
			count = 0;
		}
		else if (num < 5 || num > 12) // checks if the number entered is in the range
		{
			std::cout << "Error, number must be between 5 and 12\n\n";
		}
		else
		{
			sum = sum + num; // gains the sum of all numbers entered
		}
	}
	return sum;
}