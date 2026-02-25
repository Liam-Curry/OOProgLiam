// Name: Bernadette Power
// Login: C123456789
// Date: Sept 2023
// Time Taken: 30 mins
//---------------------------------------------------------------------------
// Program which calculates the area of a rectangle
// The length and width are entered by the user.
// ---------------------------------------------------------------------------
// Known Bugs:
// No validation on user input
// OR
// No error checking on user input

#include <iostream> 

int main()
{
	//Declare your variables
	int length = 0;
	int width = 0;
	int area = 0;


	std::cout << "Enter the length of the rectangle ";   // user input
	std::cin >> length;

	std::cout << "Enter the width of the rectangle ";
	std::cin >> width;


	area = length * width;  // calulates the area of the rectangle

	// Display the answer to the user
	std::cout << "The area of the rectangle with a length of " << length << " and a width of " << width << " is " << area;

	std::cout << std::endl;  // new line entered
	system("Pause");
	return 0;
}









