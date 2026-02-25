// Name: Liam Curry
// Login: c00311724
// Date: 17/09/2025
// Approximate time taken: 0 hours 15 minutes
//---------------------------------------------------------------------------
// Program: Calculating the area of a circle by
// reading the radius from the user
// --------------------------------------------------------------------------
// Known Bugs:
// No error checking on user input

#include <iostream>

int mainpart1()
{
	//Declare your variables
	float radius = 0.0f;
	float area = 0.0f;
	float pi = 3.14159f;

	std::cout << "Please enter the radius of the circle "; //shows a message to the user
	std::cin >> radius; //user inputs the length of the radius

	area = pi * (radius * radius); //calculates the area

	std::cout << std::endl;

	system("Pause");
	return 0;
}