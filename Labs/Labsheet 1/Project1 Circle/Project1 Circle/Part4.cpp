// Name: Liam Curry
// Login: c00311724
// Date: 17/09/2025
// Approximate time taken: 0 hours 15 minutes
//---------------------------------------------------------------------------
// Program: Using a user's circumference to calculate the radius
// --------------------------------------------------------------------------
// Known Bugs:
// No error checking on user input

#include <iostream>

int main()
{
	//declare variables
	float radius = 0.0f;
	float circumference = 0.0f;
	float pi = 3.14159f;

	std::cout << "Please enter the circumference of your circle "; //displays message to the user
	std::cin >> circumference; //takes user input

	radius = circumference / (2 * pi); //calculates the radius

	std::cout << "The radius of your circle is " << radius;
	std::cout << std::endl;
	system("Pause");
	return 0;
}