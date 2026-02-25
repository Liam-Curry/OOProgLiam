// Liam Curry
// c00311724
// 24-11-2025
// Labsheet 9, times tables from user input
// Time Taken: 0 hours, 20 minutes
// Known Bugs: No error checking on letters or control characters

#include <iostream>

void displayTimesTable(int t_tableNum); // decalring function

int mainQ6()
{
	int tableNum = 0;

	std::cout << "Please enter the times table number you wish to see\n";
	std::cin >> tableNum;

	if (tableNum <= 0 || tableNum > 12) // error checking for invalid number
	{
		std::cout << "Error, invalid number\n";
	}
	else
	{
		displayTimesTable(tableNum); // calling function
	}
	system("Pause");
	return 0;
}

/// function used to get the table and display it
/// t_tableNum is used to get the tables in which they want to multiply

void displayTimesTable(int t_tableNum)
{
	int count = 1;
	int mult = 0;

	std::cout << "\nYour times table of " << t_tableNum << " is:\n";

	while (count <= 12) // start loop
	{
		mult = t_tableNum * count;
		std::cout << t_tableNum << " * " << count << " = " << mult << std::endl;
		count++;
	} // end loop
}