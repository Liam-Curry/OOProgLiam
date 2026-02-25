// Liam Curry
// c00311724
// 27-11-2025
// Labsheet 9, displaying every number in a -3 order
// Time Taken: 0 hours, 40 minutes
// Known Bugs: No error checking on letters or control characters

#include <iostream>

float revDisp(int t_numCount); // declaring function

int mainQ11()
{
	int numCount = 0;
	float avg = 0.0f;

	std::cout << "Please enter your number\n";
	std::cin >> numCount;

	while (numCount <= 0) // error checking loop
	{
		std::cout << "Error, please re-enter\n";
		std::cin >> numCount;
	} // end loop
	
	avg = revDisp(numCount); // calling function
	std::cout << "\nYour average is: " << avg << std::endl;

	system("Pause");
	return 0;
}

/// Function used to count, subtract 3, sum and find average of user input
/// returns average to display in main

float revDisp(int t_numCount)
{
	int counter = 0;
	int sum = 0;
	float avg = 0.0f;
	float counting = 0.0f;

	counter = t_numCount;

	std::cout << std::endl;

	while (counter >= 0) //loop
	{
		std::cout << counter << " ";
		sum = sum + counter;
		counting++; // for the average
		counter -= 3; // loop controller
	} // end loop

	std::cout << std::endl;
	avg = sum / counting;

	std::cout << "The sum is: " << sum;
	
	return avg;
}