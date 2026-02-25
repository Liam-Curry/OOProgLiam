//Liam Curry 
//c00311724
//22-10-2025
//Labsheet 7, Sorting three given numbers
//0 hours 20 minutes
//Known bugs: No checking on letters or control characters

#include <iostream>

void increasingRange(int t_first, int t_second, int t_third); //delcaring function


int mainP11()
{
	int first = 0;
	int second = 0;
	int third = 0;

	std::cout << "PLease enter a number between 4 and 16\n"; //Gaining user input
	std::cin >> first;
	std::cout << "PLease enter a number between 4 and 16\n";
	std::cin >> second;
	std::cout << "PLease enter a number between 4 and 16\n";
	std::cin >> third;

	if (first < 4 || first > 16 || second < 4 || second > 16 || third < 4 || third > 16) //Error checking if the number is out of the range
	{
		std::cout << "Error, number is invalid\n";
	}
	else if (first == second || first == third || second == third) //Error checking for if two or more numbers are equal
	{
		std::cout << "Error, two or more values are equal to one another, please re-enter\n";
	}
	else
	{
		increasingRange(first, second, third); //Calling the function
	}
	system("Pause");
	return(0);
}

void increasingRange(int t_first, int t_second, int t_third) //Working out the order of the numbers from highest to lowest
{
	int highest = 0;
	int middle = 0;
	int lowest = 0;

	if (t_first > t_second && t_first > t_third)
	{
		highest = t_first;
	}
	else if (t_second > t_first && t_second > t_third)
	{
		highest = t_second;
	}
	else if (t_third > t_first && t_third > t_second)
	{
		highest = t_third;
	}

	if (t_first < t_second && t_first < t_third)
	{
		lowest = t_first;
	}
	else if (t_second < t_first && t_second < t_third)
	{
		lowest = t_second;
	}
	else if (t_third < t_first && t_third < t_second)
	{
		lowest = t_third;
	}

	if (t_first > lowest && t_first < highest)
	{
		middle = t_first;
	}
	else if (t_second > lowest && t_second < highest)
	{
		middle = t_second;
	}
	else if (t_third > lowest && t_third < highest)
	{
		middle = t_third;
	}

	std::cout << "Your highest is " << highest << " your middle is " << middle << " your lowest is " << lowest << std::endl;
}