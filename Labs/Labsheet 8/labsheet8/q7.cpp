// Liam Curry
// c00311724
// 10-11-2025
// Labsheet 8, Cinema tickets
// Time Taken: 0 hours, 20 minutes
// Known bugs: No error checking on letters or control characters


#include <iostream>
#include <string>

float calculatePrice(int t_age, int t_price); // declaring function

int mainQ7()
{
	int age = 0; // declaring variables
	float ticket = 0;
	float price = 0;

	std::cout << "Please enter the price of your ticket\n"; // gaining user input for ticket price
	std::cin >> ticket;
	std::cout << "Please enter your age\n"; // gaining user input for age
	std::cin >> age;

	if (age <= 0) // error checking on if the age inputted is valid
	{
		std::cout << "Error, age inputted is invalid\n";
	}
	else if (ticket <= 0) // error checking is the ticket price inputted is valid
	{
		std::cout << "Error, ticket price entered is invalid\n";
	}
	else
	{
		price = calculatePrice(age, ticket); // calling the function
		std::cout << "Your final price is: " << price << " Euro" << std::endl;
	}

	system("Pause");
	return 0;
}

float calculatePrice(int t_age, int t_ticket) // function used to gauge the price of the ticket based on user inputted age
{
	float price = 0;
	float finalPriceNum = 0;
	float cost = 0;

	if (t_age > 0 && t_age < 5) // checking user age
	{
		cost = t_ticket * 0;
		price = cost;
	}
	else if (t_age >= 5 && t_age <= 12)
	{
		cost = t_ticket / 2;
		price = cost;
	}
	else if (t_age > 12 && t_age <= 54)
	{
		cost = t_ticket * 1;
		price = cost;
	}
	else
	{
		cost = t_ticket * 0;
		price = cost;
	}

	return price;
}