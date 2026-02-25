//Liam Curry
//c00311724
//15-10-2025
//Labsheet 7, farhenheit to celsius
//0 hours 15 minutes
//Known bugs: No error checking on letters or control characters

#include <iostream>

int mainP5A()
{
	float farhenheit = 0.0f; //reading user input
	float celsius = 0.0f;

	std::cout << "Please enter a temperature in Farhenheit" << std::endl;
	std::cin >> farhenheit;

	celsius = (farhenheit - 32) * 5 / 9; //calculating the conversion between celsius and farhenheit

	std::cout << "Your temperature in Celsius is " << celsius << std::endl;

	system("Pause");
	return(0);
}