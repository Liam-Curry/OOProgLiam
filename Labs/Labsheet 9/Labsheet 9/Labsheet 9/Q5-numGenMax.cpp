// Liam Curry
// c00311724
// 24-11-2025
// Labsheet 9, Displaying a number set from a user input
// Time Taken: 0 hours, 30 minutes
// Known Bugs: No error checking on letters or control characters

#include <iostream>

int calculateNumbers(int t_max); // decalring function

int mainQ5()
{
	int max = 0;

	std::cout << "Please enter the max number of numbers you wish to generate.\n";
	std::cin >> max;
	std::cout << std::endl;

	if (max <= 0) // error checking on if they entered a 0 or a negative number
	{
		std::cout << "Error, you have entered an invalid number\n";
	}
	else
	{
		calculateNumbers(max); // calling the function
	}
	system("Pause");
	return 0;
}

/// Function used to take the input of the user for their numbers, check if they are odd or even,
/// Find the total for the Odd, Even and Total sum,
/// t_max is taken from the max in the main used to identify how many numbers they want

int calculateNumbers(int t_max)
{
	int count = 1;
	int num = 0;
	int sum = 0;
	int sumTotal = 0;
	int sumOdd = 0;
	int modCheck = 0;
	int countOdd = 0;

	while (count <= t_max) // start loop
	{
		std::cout << "Please enter a number: ";
		std::cin >> num;

		modCheck = num % 2; // checking if odd or not

		if (modCheck == 1) // if statement for odd or even
		{
			sumOdd = sumOdd + num;
			countOdd = countOdd + 1; // how many odd numbers were entered
		}

		sumTotal = sumTotal + num; // for total sum of all numbers

		count++;
	} // end loop

	// all display messages needed
	std::cout << std::endl << "The sum of your odd numbers is: " << sumOdd << std::endl;
	std::cout << "The count of your odd numbers is: " << countOdd << std::endl;
	std::cout << "Your total sum of all your numbers is: " << sumTotal << std::endl;;

	return sumTotal;
}