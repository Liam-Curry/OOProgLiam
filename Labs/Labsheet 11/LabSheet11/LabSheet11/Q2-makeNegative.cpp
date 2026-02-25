// Liam Curry
// c00311724
// 04-02-2026
// Time taken: 0 hours 10 minutes
// --------------------------------------------------------------
// Labsheet 11, Q2: Making an unput negative
// --------------------------------------------------------------
// Known bugs: No error checking on letters or control characters

#include <iostream>

// Declaring function
void makeNegative(int &t_input);

int mainQ2()
{
	int input = 0;

	std::cout << "Enter a number you wish to make negative\n";
	std::cin >> input;

	std::cout << "Your number is " << input << std::endl;
	makeNegative(input); // Calling function
	std::cout << "Your number is now " << input << std::endl;

	system("Pause");
	return 0;
}

/// <summary>
/// Makes a number negative from input, doesn't do anything if input is already negative
/// </summary>
/// <param name="t_input"> input from user </param>

void makeNegative(int &t_input)
{
	if (t_input < 0)
	{
		std::cout << "Your number is already negative, no code has been executed\n";
		// displays is number input is negative
	}
	else
	{
		t_input = t_input * -1;
	}
}