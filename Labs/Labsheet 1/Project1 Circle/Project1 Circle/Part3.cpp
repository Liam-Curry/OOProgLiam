// Name: Liam Curry
// Login: c00311724
// Date: 17/09/2025
// Approximate time taken: 0 hours 15 minutes 
//---------------------------------------------------------------------------
// Program: Calculating the volume of a sphere
// using the user's inputed radius
// --------------------------------------------------------------------------
// Known Bugs:
// No error checking on user input

#include <iostream>

int mainpart3()
{
	//declare variables
	float radius = 0.0f;
	float volume = 0.0f;
	float pi = 3.14159f;

	std::cout << "Please enter the radius of your sphere "; //displays message
	std::cin >> radius; //takes user input

	volume = (4.0f) / 3 * pi * (radius * radius * radius); //calculating the volume

	std::cout << "The volume of your sphere is " << volume; //displays the volume to the user
	std::cout << std::endl;
	system("Pause");
	return 0;
 
}

//its better to put "static_cast<float>(#)" for dividing in the formula to get the right answer
//alternitively you can add a ".0f" to the number on top