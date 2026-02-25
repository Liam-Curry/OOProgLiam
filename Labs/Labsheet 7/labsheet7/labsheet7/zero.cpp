//Liam Curry
//c00311724
//13-10-2025
//Labsheet 7, number is greater, less or equal to zero
//0 hours 10 minutes
//Known bugs: No checking for letters and control characters not done

#include <iostream>

int mainP1()
{
	int number = 0;
	
	std::cout << "Please enter a random number" << std::endl; //reading user input
	std::cin >> number;
	
	if (number == 0)
	{
		std::cout << "Your number is equal to zero" << std::endl;
	}
	else if (number > 0)
	{
		std::cout << "Your number is greater than zero" << std::endl;
	}
	else
	{
		std::cout << "Your number is less than zero" << std::endl;
	}

	system("Pause");
	return(0);
}