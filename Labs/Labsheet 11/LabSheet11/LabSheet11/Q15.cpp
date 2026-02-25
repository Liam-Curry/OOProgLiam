// Liam Curry
// c00311724
// 04-02-2026
// Time taken: 0 hours 5 minutes
// ---------------------------------------------------------------
// Labsheet 11, Q15: Does it work as intended
// ---------------------------------------------------------------
// Known bugs: No error checking on letters or control characters

#include <iostream>

void tripple_it(float &t_numberOne, float &t_numberTwo);

int mainQ15()
{
	float numberOne = 0.0f;
	float numberTwo = 0.0f;

	std::cout << "Enter a number : ";
	std::cin >> numberOne;

	std::cout << "Enter another number : ";
	std::cin >> numberTwo;

	std::cout << "The numbers entered are: " << numberOne << " and " << numberTwo << std::endl;

	tripple_it(numberOne, numberTwo);

	system("Pause");
	return 0;
}

void tripple_it(float &t_numberOne, float &t_numberTwo)
{
	float valueOne = t_numberOne * 3;
	float valueTwo = t_numberTwo * 3;
	std::cout << "The numbers entered after the function call are: " << valueOne << " and " << valueTwo << std::endl;
}

// It does work as intended
// but it has new values inside the function to be displayed inside the function does not follow the pass by reference ask
// It should be displaying both values inside main both times