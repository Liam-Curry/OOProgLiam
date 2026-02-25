// Liam Curry
// c00311724
// 3-12-2025
// Labsheet 9, First and Last occurance of 9
// Time Taken: 0 hours, 20 minutes
// Known Bugs: No error checking on letters or control characters

#include <iostream>

void findOccurances(int t_num); // declaring function

int mainQ13()
{
	int num = 0;

	std::cout << "Enter the number of numbers you wish to enter\n";
	std::cin >> num;

	if (num <= 0) // error checking on input
	{
		std::cout << "Error - cannot be must be greater than 0\n";
	}
	else
	{
		findOccurances(num); // calling function
	}

	system("Pause");
	return 0;
}

/// Function used to take the input from the user to then find where the number 9 occurs
/// t_num is taken from main for how many times it needs to loop

void findOccurances(int t_num)
{
	int number = 0;
	int count = 1;
	int occCheck = 0;
	int firstOccurance = 0;
	int lastOccurance = 0;

	while (count <= t_num)
	{
		std::cout << "Enter a number: ";
		std::cin >> number;

		if (number < 0) // for when a negative is entered
		{
			std::cout << "Error - cannot be less than 0\n";
			continue;
		}

		if (number == 9) // for when 9 is inputted
		{
			if (occCheck != 0) // for when first occurance is already assigned
			{
				lastOccurance = count;
			}
			else // assigning the first occurance
			{
				firstOccurance = count;
				occCheck = count;
			}
		}

		if (lastOccurance == 0 && firstOccurance != 0) // for when there is only one 9 inputted
		{
			lastOccurance = firstOccurance;
		}
		count++; // loop controller
	} // end loop

	std::cout << "\nThe first occurance of 9 is: " << firstOccurance; // will display zeros if no 9 is entered
	std::cout << "\nThe last occurance of 9 is: " << lastOccurance;
	std::cout << std::endl;
}