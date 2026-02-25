//Liam Curry
//c00311724
//5-11-2025
//Labsheet 8, month outputed from a given number
//Time Taken: 0 hours, 15 minutes
//Known bugs: No error checking on letters or control characters

#include <iostream>
#include <string>

int mainQ1()
{
	int month = 0;
	std::string monthName;
	bool errorCheck = false;

	std::cout << "enter your month as a number from 1 to 12\n"; //gaining user input
	std::cin >> month;

	switch (month) //finding which one is the correct output
	{
	case 1:
		monthName = "January";
		break;
	case 2:
		monthName = "Febuary";
		break;
	case 3:
		monthName = "March";
		break;
	case 4:
		monthName = "April";
		break;
	case 5:
		monthName = "May";
		break;
	case 6:
		monthName = "June";
		break;
	case 7:
		monthName = "July";
		break;
	case 8:
		monthName = "August";
		break;
	case 9:
		monthName = "September";
		break;
	case 10:
		monthName = "October";
		break;
	case 11:
		monthName = "November";
		break;
	case 12:
		monthName = "December";
		break;
	default:
		std::cout << "Error, invalid number inputed\n"; //error checking
		errorCheck = true;
		break;
	}

	if (errorCheck == false)
	{
		std::cout << "Your month chosen is " << monthName << std::endl;
	}
	system("Pause");
	return(0);
}