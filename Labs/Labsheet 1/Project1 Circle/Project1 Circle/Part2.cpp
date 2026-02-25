// Name: Liam Curry
// Login: c00311724
// Date: 17/09/2025
// Approximate time taken: 0 hours 20 minutes
//---------------------------------------------------------------------------
// Program: To calculate the circumference by
// using the user's inputed radius
// --------------------------------------------------------------------------
// Known Bugs:
// No error checking on user input

#include <iostream>

int mainpart2()
{
	//declare variables
	float radius = 0.0f;
	float circumference = 0.0f;
	float pi = 3.14159f;

	std::cout << "Please enter the radius of your circle to calculate circumference "; //displays message to user
	std::cin >> radius; //takes the user's input

	circumference = 2 * pi * radius;

	system("Pause");
		return 0;
}




//Learned that you have to rename the previous part as there can only be one "main" function