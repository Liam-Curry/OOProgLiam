// Liam Curry
// c00311724
// 14-01-2026
// Labsheet 9, Q6: Times Table
// Time Taken: 0 hours, 8 minutes
// Known Bugs: 

#include <iostream>

void displayTimesTable(int t_num); // declaring function

int main()
{
	int num = 0;

	std::cout << "Please enter a number from 1 to 12\n";
	std::cin >> num;

	if (num <= 0 || num > 12) // error checking on if the number is valid
	{
		std::cout << "Error - number is outside the 1-12 range\n";
	}
	else
	{
		displayTimesTable(num); // calling function
	}
}

/// This function is used to display the times table
/// It uses the count variable to display the correct times table
/// tableAns is used to find the answer of the times table
/// "t_num" is the number being multiplied in the times table

void displayTimesTable(int t_num)
{
	int tableAns = 0;
		
	std::cout << std::endl;

	for (int count = 1; count <= 12; count++)
	{
		tableAns = t_num * count;
		std::cout << t_num << " * " << count << " = " << tableAns << std::endl;
	}
}