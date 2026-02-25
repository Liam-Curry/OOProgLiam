//Liam Curry 
//c00311724
//15-10-2025
//Labsheet 7, which number is less
//0 hours 25 minutes
//Known bugs: No error checking on letters or control characters

#include <iostream>

int mainP5B()
{
	int first = 0;
	int second = 0;
	int third = 0;

	std::cout << "Please enter your first number from between 1 and 15" << std::endl; //reading user input
	std::cin >> first;
	std::cout << "Please enter your second number from between 1 and 15" << std::endl;
	std::cin >> second;
	std::cout << "Please enter your third number from between 1 and 15" << std::endl;
	std::cin >> third;

	if (first < 1 || second < 1 || third < 1 || first > 15 || second > 15 || third > 15) //if the number is outside the range of 1-15
	{
		std::cout << "Error" << std::endl;
	}
	else if (first <= second && first <= third) //Checking if the first is the lowest
	{
		std::cout << "Your lowest number is " << first << std::endl;
	}
	else if (second <= first && second <= third) //Checking if the second is the lowest
	{
		std::cout << "Your lowest number is " << second << std::endl;
	}
	else if (third <= first && third <= second) //Checking if the third is the lowest
	{
		std::cout << "Your lowest number is " << third << std::endl;
	}

	system("Pause");
	return(0);
}