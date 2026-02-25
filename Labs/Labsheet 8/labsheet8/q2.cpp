//Liam Curry
//c00311724
//5-11-2025
//Labsheet 8, Centimetres to Inches 
//Time Taken: 0 hours, 20 minutes
//Known bugs: No error checking on letters or control characters

#include <iostream>

float inchesEquivalent(float t_centi); //declaring function

int mainQ2()
{
	float centi = 0;
	float inches = 0;


	std::cout << "Please enter your chosen amount of Centimetres\n";
	std::cin >> centi;

	if (centi <= 0)
	{
		std::cout << "The number you have entered is invalid\n"; //error checking
	}
	else
	{
		inches = inchesEquivalent(centi); //calling function
		std::cout << "Your Centimetres in Inches is : " << inches << std::endl;
	}
	system("Pause");
	return(0);
}

float inchesEquivalent(float t_centi) //converting the centimetres entered into inches
{
	float inches = 0;
	const float CONVERT = 0.394f;

	inches = t_centi * CONVERT;
	return inches;
}