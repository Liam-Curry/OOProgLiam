//Liam Curry
//c00311724
//10-11-2025
//Labsheet 8, random card suit and face
//Time Taken: 30 hours, 
//0 minutes
//Known bugs: No error checking on letters or control characters

#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>


std::string getCardSuit(); //declaring functions
std::string getCardFace();

int mainQ6()
{
	std::string suitno = " ";
	std::string suitface = " ";
	std::srand(std::time(nullptr)); // just once

	suitno = getCardSuit(); //calling functions
	suitface = getCardFace();

	std::cout << "Your card suit is: " << suitno << " and your card face is: " << suitface << std::endl; 

	system("Pause");
	return(0);
}

std::string getCardSuit() //gettng the card suit
{
	int randno = 0;
	std::string suitno = "";

	randno = (std::rand() % 4) + 1;

	switch (randno)
	{
	case 1:
	{
		suitno = "Hearts";
		break;
	}
	case 2:
	{
		suitno = "Diamonds";
		break;
	}
	case 3:
	{
		suitno = "Clubs";
		break;
	}
	case 4:
	{
		suitno = "Spades";
		break;
	}
	}
	return suitno;
}

std::string getCardFace() //getting the card face
{
	int randno = 0;
	std::string suitface = "";

	randno = (std::rand() % 13) + 1;

	switch (randno)
	{
	case 1:
	{
		suitface = "Ace";
		break;
	}
	case 2:
	{
		suitface = "2";
		break;
	}
	case 3:
	{
		suitface = "3";
		break;
	}
	case 4:
	{
		suitface = "4";
		break;
	}
	case 5:
	{
		suitface = "5";
		break;
	}
	case 6:
	{
		suitface = "6";
		break;
	}
	case 7:
	{
		suitface = "7";
		break;
	}
	case 8:
	{
		suitface = "8";
		break;
	}
	case 9:
	{
		suitface = "9";
		break;
	}
	case 10:
	{
		suitface = "10";
		break;
	}
	case 11:
	{
		suitface = "Jack";
		break;
	}
	case 12:
	{
		suitface = "Queen";
		break;
	}
	case 13:
	{
		suitface = "King";
		break;
	}
	}
	return suitface;
}