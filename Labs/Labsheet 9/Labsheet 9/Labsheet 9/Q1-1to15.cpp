// Liam Curry
// c00311724
// 19-11-2025
// Labsheet 9, Displaying numbers 1->15 with the sum
// Time Taken: 0 hours, 10 minutes
// Known Bugs: None

#include <iostream>

int displayNumbers(); // declaring function

int mainQ1()
{
	int sum = 0;

	sum = displayNumbers(); // calling function

	std::cout << std::endl << "Your total sum is: " << sum << std::endl;

	system("Pause");
	return 0;
}

/// function used to gain the sum and to display all numbers
/// sum calculation to gain the sum of all numbers displayed
/// count calculation to control loop
/// returns the sum to the main for it to display

int displayNumbers() 
{
	int count = 0;
	int sum = 0;

	for (count=1; count <= 15; count++)
	{
		std::cout << count << " ";
		sum = sum + count;
	}
	return sum;
}