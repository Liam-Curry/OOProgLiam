// Dice class declaration
#pragma once

#include "SFML/Graphics.hpp" 


class Dice
{
	// the data members are private by default
	int m_diceNum; // the dice number
	int m_secondDice;
	int m_thirdDice;

public:	  // declaration of member functions	
	Dice();  // default constructor
	int rollDice();
};
