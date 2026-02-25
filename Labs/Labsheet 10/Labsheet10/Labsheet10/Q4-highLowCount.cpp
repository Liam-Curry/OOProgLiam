// Liam Curry
// c00311724
// 19-01-2026
// ---------------------------------------------------------------------
// Labsheet 10, Question 4: Modifying Q3 to count the highest and lowest
// Time Taken: 0 hours 5 minutes
// ---------------------------------------------------------------------
// Known Bugs: No error checking on letters or control characters

#include <iostream>

void arrayCalulations2(); // declaring function

int mainQ4()
{
	arrayCalulations2(); // calling function

	system("Pause");
	return 0;
}

/// <summary>
/// This function is used to gain the user input for the array and display the:
/// Highest, Lowest, Sum and Average of the numbers entered
/// </summary>

void arrayCalulations2()
{
	const int MAX_NUMS = 8;
	int arrayNum[MAX_NUMS];
	int lowest = 11;
	int highest = 0;
	float sum = 0;
	float avg = 0;

	int highestCount = 0;
	int lowestCount = 0;

	std::cout << "Enter the numbers you wish to have in the array\n";

	for (int count = 0; count < MAX_NUMS; count++)
	{
		std::cin >> arrayNum[count]; // looped number entry

		while (arrayNum[count] < 1 || arrayNum[count] > 10)
		{
			std::cout << "Error, must be in the range of 1-10, re-enter\n";
			std::cin >> arrayNum[count];
		}

		if (arrayNum[count] > highest) // check for highest
		{
			highest = arrayNum[count];
			highestCount = 0; // reset the highestCount
		}

		if (arrayNum[count] < lowest) // check for lowest
		{
			lowest = arrayNum[count];
			lowestCount = 0; // reset the lowestCount
		}

		if (arrayNum[count] == lowest) // for when the lowest is equal to the current array number
		{
			lowestCount++;
		}

		if (arrayNum[count] == highest) // for when the highest is equal to the current array number
		{
			highestCount++;
		}

		sum = sum + arrayNum[count]; // gains sum
	}

	avg = sum / MAX_NUMS; // gains average



	std::cout << "\nThe lowest number is: " << lowest << std::endl;
	std::cout << "The highest number is: " << highest << std::endl;
	std::cout << "The total sum is: " << sum << std::endl;
	std::cout << "The average is: " << avg << std::endl;

	std::cout << "\nThe highest number appeared " << highestCount << " time(s)";
	std::cout << "\nThe lowest number appeared " << lowestCount << " time(s)\n";
}