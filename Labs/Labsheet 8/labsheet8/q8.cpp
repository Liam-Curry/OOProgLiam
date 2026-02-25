// Liam Curry
// c00311724
// 10-11-2025
// Labsheet 8, Calculating the area of a rectangle
// Time Taken: 0 hours, 20 minutes
// Known bugs: No error checking on letters or control characters

#include <iostream>

float calAreaRectangle(float t_length, float t_width); // declaring function

int mainQ8()
{
	float length = 0;
	float width = 0;
	bool errorCheck = false;
	float area = 0;

	std::cout << "Please enter the width of your rectangle\n"; // gaining user input for the width
	std::cin >> width;
	std::cout << "Please enter the length of your rectangle\n"; // gaining user input for the width
	std::cin >> length;

	if (width <= 0)
	{
		std::cout << "Error, width entered is invalid\n"; // error checking on if width was entered as zero or below
		errorCheck = true;
	}
	if (length <= 0)
	{
		std::cout << "Error, length entered is invalid\n"; // error checking on if length was entered as zero or below
		errorCheck = true;
	}

	if (errorCheck == false) // checking if the error check has been changed or not
	{
		area = calAreaRectangle(length, width); // calling function
		std::cout << "Your area is: " << area << " squared units" << std::endl;
	}

	system("Pause");
	return 0;
}

float calAreaRectangle(float t_length, float t_width) // function used to calculate the area of the given rectangle
{
	float area = 0;

	area = t_length * t_width;

	return area;
}