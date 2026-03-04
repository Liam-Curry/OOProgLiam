// Game class declaration

#ifndef GAME_HPP
#define GAME_HPP
#pragma warning( push )
#pragma warning( disable : 4275 )
// ignore this warning
// C:\SFML - 3.0.0\include\SFML\System\Exception.hpp(41, 47) : 
// warning C4275 : non dll - interface class 'std::runtime_error' used as base for dll - interface class 'sf::Exception'

/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the #endif at the bottom
/// </summary>
#include "SFML/Graphics.hpp" 
#include <iostream>
#include <cstdlib>  // include support for randomizing
#include <ctime>   // supports ctime function

#include "Dice.h"   // include Dice header file

class Game
{
	// data members (instance variables)
	Dice m_gameDice; // variable to store the new Dice object 
	Dice m_gameDice2;

	
	sf::RenderWindow m_window; // main SFML window
	sf::Font m_font;// font used by message
	sf::Text m_welcomeMessage{ m_font }; // text used for writing a message on screen
	sf::Text m_dice2{ m_font };
	bool m_exitGame; // control exiting game
	int m_diceRoll = 0;
	int m_secondRoll = 0;
	int m_thirdRoll = 0;
	int m_dice2Roll = 0;

	bool m_twoDice = false;
	bool m_threeDice = false;
	bool m_dice2Check = false;

	void processEvents();
	void processKeys(const std::optional<sf::Event> t_event);
	void checkKeyboardState();
	void update(sf::Time t_deltaTime);
	void render();

	void setupTexts();

	
public:
	Game();
	void run();

};

#pragma warning( pop ) 
#endif // !GAME_HPP





