//Liam Curry
//c00311724
//10-11-2025
//Labsheet 8, if two numbers are divisible
//Time Taken: 0 hours, 20 minutes
//Known bugs: No error checking on letters or control characters

#include <iostream>
#include <string>

std::string isDivisible(int t_no1, int t_no2); //declaring function

int mainQ5()
{
	int no1 = 0;
	int no2 = 0;
	std::string ans = " ";

	std::cout << "Please enter your two numbers, the second number being the one doing the dividing\n"; //gaining user input
	std::cin >> no1;
	std::cin >> no2;

	if (no1 <= 0 || no2 <= 0) //error checking
	{
		std::cout << "Error, one value is set to zero or below, please re-enter\n";
	}
	else
	{
		ans = isDivisible(no1, no2); //calling function
		std::cout << "Your two numbers " << ans << " divisible by each other\n";
	}
	system("Pause");
	return(0);
}

std::string isDivisible(int t_no1, int t_no2) //function to calculate if the numbers are divisible
{
	std::string ans = " ";
	int mod = 0;

	mod = t_no1 % t_no2;

	if (mod == 0)
	{
		ans = "ARE";
	}
	else
	{
		ans = "ARE NOT";
	}
	return ans;
}