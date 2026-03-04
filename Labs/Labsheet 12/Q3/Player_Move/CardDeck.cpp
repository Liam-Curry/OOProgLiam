// CardDeck class

#include "CardDeck.h"   // include CardDeck header file


// Definition of member functions of the CardDeck class



void CardDeck::dealCard()
// Randomly generates a new card.
// It should randomly generate a number between 1-4 for the card suit.
// If a 1 is generated the cardSuit should be "Hearts" and so on. 
// It should randomly generate a number between 1-13 for the card face.
// If a 1 is generated the cardFace should be "Ace", if a 2 is generated the
// cardFace should be "2" ... if 12 is generated the cardFace should be "Queen" 
// and so on. It should not return anything.
{
	// Randomly generates a suit for the card suit.
	int numberGen = (rand() % 4) + 1;
	
	switch (numberGen)
	{
	case 1:
		m_cardSuit = "Hearts";
		break;
	case 2:
		m_cardSuit = "Clubs";
		break;
	case 3:
		m_cardSuit = "Spades";
		break;
	case 4:
		m_cardSuit = "Diamonds";
		break;
	default:
		break;
	}

   // Randomly generates a number between 1-13 for the card face
   
	int numberGen2 = (rand() % 13) + 1;

   // It assigns the string Ace when a 1 is generated, it assigns the string 2 with a 2 is generated and so on.

	switch (numberGen2)
	{
	case 1:
		m_cardFace = "Ace";
		break;
	case 2:
		m_cardFace = "Two";
		break;
	case 3:
		m_cardFace = "Three";
		break;
	case 4:
		m_cardFace = "Four";
		break;
	case 5:
		m_cardFace = "Five";
		break;
	case 6:
		m_cardFace = "Six";
		break;
	case 7:
		m_cardFace = "Seven";
		break;
	case 8:
		m_cardFace = "Eight";
		break;
	case 9:
		m_cardFace = "Nine";
		break;
	case 10:
		m_cardFace = "Ten";
		break;
	case 11:
		m_cardFace = "Jack";
		break;
	case 12:
		m_cardFace = "Queen";
		break;
	case 13:
		m_cardFace = "King";
		break;
	default:
		break;
	}

}

std::string CardDeck::getCardSuit()
// This function should ONLY return the cardSuit. It should not generate a new card suit.
{
	return m_cardSuit;
}

std::string CardDeck::getCardFace()
// This function should ONLY return the cardFace. It should not generate a new card face.
{
	return m_cardFace;
}
