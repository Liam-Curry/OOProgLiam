//Liam Curry
//c00311724
//22-10-2025
//Labsheet 7, rectangle width and length to area
//0 hours 15 minutes
//Known bugs: No error checking on letters or control characters

#include <iostream>

void callAreaRectangle(float t_width, float t_length); //declaring function

int mainP8()
{
	float length = 0;
	float width = 0;
	
	std::cout << "Enter your length\n"; //reading user input
	std::cin >> length;
	std::cout << "Enter your width\n";
	std::cin >> width;

	if (length <= 0 || width <= 0)
	{
		std::cout << "One value is invalid, please re-enter\n"; //error checking to see if one value entered is zero or below
	}
	else
	{
		callAreaRectangle(width, length); //calling function
	}

	system("Pause");
	return(0);
}

void callAreaRectangle(float t_width, float t_length) //function used to calculate the area
{
	float area = 0;

	area = t_width * t_length; //calculating the area

	std::cout << "Your area is " << area << std::endl;
}