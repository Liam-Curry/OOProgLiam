//Liam Curry
//c00311724
//22-10-2025
//Labsheet 7, Perimeter of a rectangle
//0 hours 10 minutes
//Known bugs: No checking on letters or control characters

#include <iostream>

void callPerimeterRectangle(float t_length1, float t_length2, float t_width1, float t_width2); //declaring function

int mainP9()
{
	float length1 = 0;
	float length2 = 0;
	float width1 = 0;
	float width2 = 0;

	std::cout << "Enter your first length of your rectangle\n"; //reading user input
	std::cin >> length1;
	std::cout << "Enter your second length of your rectangle\n";
	std::cin >> length2;
	std::cout << "Enter your first width of your rectangle\n";
	std::cin >> width1;
	std::cout << "Enter your second width of your rectangle\n";
	std::cin >> width2;

	if (length1 != length2 || width1 != width2)
	{
		std::cout << "Error, lengths and/or widths do not match\n"; //error checking to see if the sides are equal to each other or not
	}
	else
	{
		callPerimeterRectangle(length1, length2, width1, width2); //calling function
	}

	system("Pause");
	return(0);
}

void callPerimeterRectangle(float t_length1, float t_length2, float t_width1, float t_width2) //function used to calculate perimeter
{
	float perimeter = 0;

	perimeter = t_length1 + t_length2 + t_width1 + t_width2; //calculating perimeter
	
	std::cout << "Your perimeter is " << perimeter << std::endl;
}