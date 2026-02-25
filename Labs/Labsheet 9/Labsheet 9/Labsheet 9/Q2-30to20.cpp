// Liam Curry
// c00311724
// 19-11-2025
// Labsheet 9, Displaying numbers 30->20 with the sum and average
// Time Taken: 0 hours, 15 minutes
// Known Bugs: None

#include <iostream>

float reverseDisplayNum(); // declaring function

int mainQ2()
{
	float avg = 0.0f;

	avg = reverseDisplayNum(); // calling function

	std::cout << "Your average is: " << avg << std::endl;

	system("Pause");
	return 0;
}

/// Function used to gain the average, sum, and to display the numbers 30 to 20
/// sum calculation used to gain the sum all of the numbers displayed
/// count calculation used to control the loop
/// avg calculation to calculate the average
/// returns the average to the main to then be displayed

float reverseDisplayNum()
{
	int count = 30;
	float avg = 0.0f;
	float sum = 0.0f;

	while (count >= 20)
	{
		std::cout << count << " ";
		sum = sum + count;
		count = count - 1;
	}
	avg = sum / 11;

	std::cout << std::endl << "Your sum is: " << sum << std::endl;

	return avg;
}