// Liam Curry
// c00311724
// 04-02-2026
// Time taken: 0 hours 5 minutes
// --------------------------------------------------------------
// Labsheet 11, Q1: Entering 2 numbers to then tripple them
// --------------------------------------------------------------
// Known bugs: No error checking on letters or control characters

#include <iostream>

// Declaring function
void trippleIt(float &t_num1, float &t_num2);

int mainQ1()
{
	float num1 = 0.0f;
	float num2 = 0.0f;

	std::cout << "Enter first number\n"; // Gains input for first number
	std::cin >> num1;

	std::cout << std::endl;
	
	std::cout << "Enter second number\n"; // Gains input for second numbers
	std::cin >> num2;
	
	// Displays inputed numbers, sends then to function, then displays again after function
	std::cout << "\nYour First Number is " << num1 << " and your Second Number is " << num2;
	trippleIt(num1, num2); // Calling function
	std::cout << "\nYour First Number is now " << num1 << " and your Second Number is now " << num2 << std::endl;

	system("Pause");
	return 0;
}

/// <summary>
/// Function used to tripple the numbers input by user
/// </summary>
/// <param name="t_num1"> num1 from main passed by address/reference </param>
/// <param name="t_num2"> num2 from main passed by address/reference </param>

void trippleIt(float &t_num1, float &t_num2)
{
	t_num1 = t_num1 * 3;
	t_num2 = t_num2 * 3;
}