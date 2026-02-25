//Liam Curry
//c00311724
//13-10-2025
//Labsheet 7, income brackets
//0 hours 25 minutes
//known bugs: No error checking for letters and control characters

#include <iostream>

int mainP2() 
{
	int income = 0;

	std::cout << "Please enter your income" << std::endl; //reading for user input
	std::cin >> income;

	if (income < 0) 
	{
		std::cout << "Error, income is below zero" << std::endl;
	}
	else if (income <= 30000) 
	{
		std::cout << "Low income" << std::endl;
	}
	else if (income > 30000 && income < 70000){
		std::cout << "Middle income" << std::endl;
	} 
	else
	{
		std::cout << "High income" << std::endl;
	} 
	system("Pause");
	return(0);
}