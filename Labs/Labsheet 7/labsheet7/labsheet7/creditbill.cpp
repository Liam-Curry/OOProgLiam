//Liam Curry 
//c00311724
//22-10-2025
//Labsheet 7, Credit card bill interest checking
//0 hours 20 minutes
//Known bugs: No checking on letters or control characters

#include <iostream>

int mainP12()
{
	int ammount = 0;
	float intrate1 = 0.0f;
	float intrate2 = 0.0f;
	const float INTEREST1 = 0.12f;
	const float INTEREST2 = 0.18f;
	float finalint = 0.0f;

	std::cout << "Please enter the amount on your credit card bill\n"; //Getting user input
	std::cin >> ammount;

	if (ammount <= 0) //Error checking on invalid nummbers
	{
		std::cout << "Error, invalid ammount\n";
	}
	else
	{
		intrate1 = 500 * INTEREST1; //calculating interest rates
		intrate2 = (ammount - 500) * INTEREST2;
		finalint = intrate1 + intrate2;

		std::cout << "Your final interest rate is " << finalint << std::endl;
		std::cout << "Your interest rates are " << intrate1 << " and " << intrate2 << std::endl;
	}
	system("Pause");
	return(0);
}