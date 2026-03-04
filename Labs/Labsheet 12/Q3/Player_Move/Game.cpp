// Name: 
// Login: 
// Date: 
// Approx hours of work : 
//---------------------------------------------------------------------------
// A program which creates a deck of cards for a game.
// The program should generate a new card when the down arrow key is pressed.
// The program should display the card suit and face on the screen. 
// ---------------------------------------------------------------------------
// Known Bugs:  
// When a key is pressed on the keyboard, it picks up multiple clicks at once not just one click.  Can you fix this?

//////////////////////////////////////////////////////////// 
// include correct library files for release and debug versions
//////////////////////////////////////////////////////////// 

#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 
#pragma comment(lib,"opengl32.lib") 
#pragma comment(lib,"glu32.lib") 

#include <iostream> // for console window output
#include "Game.h"   // include Game header file



Game::Game() :
	m_window{ sf::VideoMode{ sf::Vector2u{800U, 600U}, 32U }, "Card Deck" },
	m_exitGame{ false } //when true game will exit
{
	setupTexts(); // load font 
}


/// <summary>
/// main game loop
/// update 60 times per second,
/// process update as often as possible and at least 60 times per second
/// draw as often as possible but only updates are on time
/// if updates run slow then don't render frames
/// </summary>
void Game::run()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	const float fps{ 60.0f };
	sf::Time timePerFrame = sf::seconds(1.0f / fps); // 60 fps
	while (m_window.isOpen())
	{
		processEvents(); // as many as possible
		timeSinceLastUpdate += clock.restart();
		while (timeSinceLastUpdate > timePerFrame)
		{
			timeSinceLastUpdate -= timePerFrame;
			processEvents(); // at least 60 fps
			update(timePerFrame); //60 fps
		}
		render(); // as many as possible
	}
}
/// <summary>
/// handle user and system events/ input
/// get key presses/ mouse moves etc. from OS
/// and user :: Don't do game update here
/// </summary>
void Game::processEvents()
{

	while (const std::optional newEvent = m_window.pollEvent())
	{
		if (newEvent->is<sf::Event::Closed>()) // close window message 
		{
			m_exitGame = true;
		}
		if (newEvent->is<sf::Event::KeyPressed>()) //user pressed a key
		{
			processKeys(newEvent);
		}
	}
}


/// <summary>
/// deal with key presses from the user
/// </summary>
/// <param name="t_event">key press event</param>
void Game::processKeys(const std::optional<sf::Event> t_event)
{
	const sf::Event::KeyPressed* newKeypress = t_event->getIf<sf::Event::KeyPressed>();
	if (sf::Keyboard::Key::Escape == newKeypress->code)
	{
		m_exitGame = true;
	}
	if (sf::Keyboard::Key::Down == newKeypress->code)
	{
		m_cardFace = m_cardDeck.getCardFace();
		m_cardSuit = m_cardDeck.getCardSuit();
		m_dealed = true;
	}
}

/// <summary>
/// Check if any keys are currently pressed
/// </summary>
void Game::checkKeyboardState()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
	{
		m_exitGame = true;
	}

	// checks what keys have been pressed  

}

/// <summary>
/// Update the game world
/// </summary>
/// <param name="t_deltaTime">time interval per frame</param>
void Game::update(sf::Time t_deltaTime)
{
	m_cardDeck.dealCard();
	checkKeyboardState();

	//Add (concatenate) the card face and suit to the end of the string here
	if (m_dealed == true)
	{
		m_welcomeMessage.setString("The card is the : " + m_cardFace + " of " + m_cardSuit);
	}
	else
	{
		m_welcomeMessage.setString("The card is the : ");
	}

	if (m_exitGame)
	{
		m_window.close();
	}



}

/// <summary>
/// draw the frame and then switch buffers
/// </summary>
void Game::render()
{
	m_window.clear(sf::Color::White);
	m_window.draw(m_welcomeMessage);

	//Display the card face and suit on the screen here
	m_window.draw(m_welcomeMessage);


	m_window.display();
}

/// <summary>
/// load the font and setup the text message for screen
/// </summary>
void Game::setupTexts()
{
	if (!m_font.openFromFile("ASSETS\\FONTS\\Jersey20-Regular.ttf"))
	{
		std::cout << "problem loading arial black font" << std::endl;
	}
	m_welcomeMessage.setFont(m_font);
	m_welcomeMessage.setPosition(sf::Vector2f{ 20.0f, 10.0f });
	m_welcomeMessage.setCharacterSize(50U);
	m_welcomeMessage.setOutlineColor(sf::Color::Black);
	m_welcomeMessage.setFillColor(sf::Color::Red);
	m_welcomeMessage.setOutlineThickness(2.0f);

}
