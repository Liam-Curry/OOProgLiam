// Name: Liam Curry 
// Login: c00311724
// Date: 8-10-2025
// Approximate time taken: 2 hours 0 minutes
//---------------------------------------------------------------------------
// Program: Vending machine change
// ---------------------------------------------------------------------------
// Known Bugs:
// No error checking

#include <iostream>

int main()
{
	int money = 0;
	int cost = 0;
	int change = 0;
	int newchange = 0;
	int newchange2 = 0;
	int newchange3 = 0;
	int newchange4 = 0;
	int newchange5 = 0;
	int nochange = 0;
	int noof50 = 0;
	int noof20 = 0;
	int noof10 = 0;
	int noof5 = 0;
	int noof2 = 0;
	int noof1 = 0;

	std::cout << "Please enter the amount of money you have" << std::endl;
	std::cin >> money;
	std::cout << "Please enter the cost of the item" << std::endl;
	std::cin >> cost;
	std::cout << std::endl;

	change = money - cost;
	
	if (change >= 50) {
		noof50 = change / 50;
		newchange = change - 50;
	} 
	if(change < 50) {
			noof50 = 0;
			newchange = change;
	}
	if (newchange >= 20) {
		noof20 = newchange / 20;
		newchange2 = change - 20;
	}
	if (newchange < 20) {
			noof20 = 0;
			newchange2 = newchange;
	}
	if (newchange2 >= 10) {
		noof10 = newchange2 / 10;
		newchange3 = newchange2 - 10;
	}
	if (newchange2 < 10) {
		noof10 = 0;
		newchange3 = newchange2;
	}

	std::cout << "Number of 50 cent coins is " << noof50 << std::endl;
	std::cout << "Number of 20 cent coins is " << noof20 << std::endl;
	std::cout << "Number of 10 cent coins is " << noof10 << std::endl;
	
	return(0);
}