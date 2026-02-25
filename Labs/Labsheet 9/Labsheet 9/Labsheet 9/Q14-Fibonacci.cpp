// Liam Curry
// c00311724
// 3-12-2025
// Labsheet 9, first 20 numbers of the Fibonacci sequence
// Time Taken: 0 hours, 15 minutes
// Known Bugs: No error checking on letters or control characters

#include <iostream>

void fibonacciSeries(); // decalring function

int mainQ14()
{
	fibonacciSeries(); // calling function
	system("Pause");
	return 0;
}

/// function used to display the first 20 numbers of the Fibonacci sequence

void fibonacciSeries()
{
	int num1 = 0;
	int num2 = 1;
	int numOne = 0;
	int count = 1;

	while (count < 20)
	{
		if (count == 1) // displaying the first 0 only once
		{
			std::cout << num1 << " ";
		}

		numOne = num1 + num2; // to find the next number
		std::cout << numOne << " "; // displaying the next number
		num2 = num1; // to replace the values with the previous two numbers before the new number
		num1 = numOne;
		count++; // loop controller
	} // end loop
	std::cout << std::endl;
	std::cout << std::endl;
}