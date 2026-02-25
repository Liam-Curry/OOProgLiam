//Liam Curry
//c00311724
//22-10-2025
//Labsheet 7, Centimetres to Inches
//0 hours 15 minutes
//Known bugs: No error checking on letters or control characters

#include <iostream>

void inchEquivalent(float t_centi); //declaring function

int mainP6()
{
	float centi = 0.0f;

	std::cout << "Enter your centimetres\n"; //reading user input
	std::cin >> centi;

	if (centi <= 0) //error checking on if the number is zero or below
	{
		std::cout << "Error, value is zero or below";
	}
	else
	{
		inchEquivalent(centi); //calling the function
	}

	system("Pause");
	return(0);
}

void inchEquivalent(float t_centi) //function used to convert centimetres to inches
{
	float inches = 0.0f;
	const float CONVERT = 0.394f;

	inches = t_centi * CONVERT; //converting centimetres to inches

	std::cout << "Your messurement in inches is " << inches << std::endl;
}