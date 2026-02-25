//Liam Curry 
//c00311724
//22-10-2025
//Labsheet 7, number of 10 euro notes and 1 euro coins
//0 hours 20 minutes
//Known bugs: No checking on letters or control characters

#include <iostream>

void calculateEuroNotes(int t_total); //declaring function

int mainP10()
{
	int total = 0;

	std::cout << "Enter your total amount of euro\n"; //reading user input
	std::cin >> total;

	if (total <= 0)
	{
		std::cout << "Error, value is too low\n"; //error checking to see if the value entered is zero or below
	}
	else
	{
		calculateEuroNotes(total); //calling function
	}
	system("Pause");
	return(0);
}

void calculateEuroNotes(int t_total) //function used to calculate the number of 10 euro bills and 1 euro coins
{
	int noOf10 = 0;
	int noOf1 = 0;

	noOf10 = t_total / 10;	//calculating the number of 10 euro bills
	noOf1 = t_total - (noOf10 * 10);	//calculating the number of 1 euro coins

	std::cout << "Your total number of 10 euro notes is " << noOf10 << " and your total number of 1 euro coins is " << noOf1 << std::endl;
}