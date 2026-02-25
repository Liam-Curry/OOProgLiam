// Liam Curry
// c00311724
// 26-11-2025
// Labsheet 9, gaining the sum of numbers from the user inputted start and end
// Time Taken: 0 hours, 20 minutes
// Known Bugs: No error checking on letters or control characters

#include <iostream>

int addNumbers(int t_startNum, int t_endNum); // declaring function

int mainQ8()
{
	int startNum = 0;
	int endNum = 0;
	int sum = 0;

	// gaining user input
	std::cout << "Enter your starting number\n";
	std::cin >> startNum;	
	std::cout << "Enter your ending number\n";
	std::cin >> endNum;

	if (startNum <= 0 || endNum <= 0) // error checking if the inputted numbers are 0 or less
	{
		std::cout << "Error, numbers cannot be zero or less\n";
	}
	else if (endNum < startNum) // error checking if the end number is less than the starting number
	{
		std::cout << "Error, ending number must be greater than the starting number\n";
	}
	else if (endNum == startNum) // error checking on if they are equal
	{
		std::cout << "Error, starting number and ending number must not be equal\n";
	}
	else
	{
		sum = addNumbers(startNum, endNum); // calling function
		std::cout << "\nThe sum of all numbers is: " << sum << std::endl;
	}

	system("Pause");
	return 0;
}

/// Function used to calculate the sum of the numbers between start and end numbers entered
/// if statement used to set sum to equal the start number
/// t_startNum is copied from main and used as the starting number
/// t_endNum is copied from main and used as the ending number
/// returns the sum to the main to then be displayed

int addNumbers(int t_startNum, int t_endNum)
{
	int count = 1;
	int sum = 0;
	int check = 0;

	check = (t_endNum - t_startNum) + 1;

	while (count < check) // start loop
	{
		sum = sum + t_startNum;
		t_startNum = t_startNum + 1; // adds one to startNum to then add onto on the next loop
		
		count++;
	} // end loop
	return sum;
}