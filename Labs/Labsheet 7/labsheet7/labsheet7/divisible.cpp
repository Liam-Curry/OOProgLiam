//Liam Curry
//c00311724
//15-10-2025
//Labsheet 7, 2 numbers divisble by each other
//0 hours 10 minutes
//Known bugs: No error checking on letters and control characters

#include <iostream>

int mainP4()
{
	int first = 0;
	int second = 0;
	int ans = 0;

	std::cout << "Please enter your first number" << std::endl; //reading user input
	std::cin >> first;
	std::cout << "Please enter your second number" << std::endl;
	std::cin >> second;

	ans = first % second; //calculating if the two numbers are equally divisible by using mode

	if (ans == 0)
	{
		std::cout << "Your 2 numbers are equally divisible by each other!" << std::endl;
	}
	else
	{
		std::cout << "Your two numbers are not equally divisble by each other, sorry" << std::endl;
	}

	system("Pause");
	return(0);
}