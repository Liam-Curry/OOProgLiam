// Liam Curry
// c00311724
// 14-01-2026
// Labsheet 9, Q2: Displaying 30 to 20 with the sum and average
// Time Taken: 0 hours, 10 minutes
// Known Bugs: None

#include <iostream>

float reverseDisplayNums(); // declaring the function

int mainQ2()
{
	float average = 0.0f;

	average = reverseDisplayNums(); // calling function

	std::cout << "\nThe average of the numbers between 30 and 20 is: " << average << std::endl;

	system("Pause");
	return 0;
}

/// This function uses a loop to display the numbers between 20 and 30 in a reverse order
/// It then gets the total sum of these numbers and then the average
/// The for loop starts at 30 and ends when it reaches 20, going down in steps of 1
/// The average is returned to the main to then be displayed in the main

float reverseDisplayNums()
{
	float sum = 0.0f;
	float average = 0.0f;

	for (int count = 30; count >= 20; count--)
	{
		std::cout << count << " ";
		sum = sum + count;
	}

	std::cout << "\nThe sum of the numbers between 30 and 20 is: " << sum;
	average = sum / 11;

	return average;
}