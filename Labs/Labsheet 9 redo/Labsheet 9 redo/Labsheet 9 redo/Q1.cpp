// Liam Curry
// c00311724
// 14-01-2026
// Labsheet 9, Q1: Displaying the numbers 1 -> 15 with the sum of those numbers
// Time Taken: 0 hours, 10 minutes
// Known Bugs: None

#include <iostream>

int displayNumbers(); // declaring function

int mainQ1()
{
	int sum = 0;

	sum = displayNumbers();

	std::cout << "\nThe total sum of the numbers 1 to 15 is: " << sum << std::endl;

	system("Pause");
	return 0;
}

/// Function used to loop and display the numbers 1 to 15
/// and to sum them up together
/// The for loop starts at 1 and stops at 15, going up in steps of 1
/// It returns the sum of the numbers to the main to the be displayed in the main

int displayNumbers()
{
	int sum = 0;

	for (int count = 1; count <= 15; count++)
	{
		std::cout << count << " ";
		sum = sum + count;
	}
	return sum;
}