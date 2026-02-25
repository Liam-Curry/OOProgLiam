// Name: 
// Login: 
// Date: 
// Approx hours of work : 
//---------------------------------------------------------------------------
/*
// TEMPLATE: A program that simulates a 6 sided dice for a game.
// It randomly generates a new number when the up arrow key is pressed.
// This is like rolling the dice.
// It displays the dice number on the screen.
*/
// ---------------------------------------------------------------------------
// Known Bugs:
// When a key is pressed on the keyboard, it picks up multiple clicks at once not just one click.

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
	m_window{ sf::VideoMode{ sf::Vector2u{800U, 600U}, 32U }, "Dice" },
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
	if (sf::Keyboard::Key::Up == newKeypress->code)
	{
		m_twoDice = false;
		m_threeDice = false;
		m_diceRoll = m_gameDice.rollDice();
	}
	if (sf::Keyboard::Key::Num2 == newKeypress->code || sf::Keyboard::Key::Numpad2 == newKeypress->code)
	{
		m_twoDice = true;
		m_threeDice = false;

		m_diceRoll = m_gameDice.rollDice();
		m_secondRoll = m_gameDice.rollDice();
	}
	if (sf::Keyboard::Key::Num3 == newKeypress->code || sf::Keyboard::Key::Numpad3 == newKeypress->code)
	{
		m_twoDice = false;
		m_threeDice = true;

		m_diceRoll = m_gameDice.rollDice();
		m_secondRoll = m_gameDice.rollDice();
		m_thirdRoll = m_gameDice.rollDice();
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
}

/// <summary>
/// Update the game world
/// </summary>
/// <param name="t_deltaTime">time interval per frame</param>
void Game::update(sf::Time t_deltaTime)
{
	checkKeyboardState();
	
	if (m_twoDice == false && m_threeDice == false)
	{
		m_welcomeMessage.setString("The dice number is " + std::to_string(m_diceRoll));
	}
	if (m_twoDice == true)
	{
		m_welcomeMessage.setString("The dice number is " + std::to_string(m_diceRoll) + "\nThe second number is " + std::to_string(m_secondRoll));
	}
	if (m_threeDice == true)
	{
		m_welcomeMessage.setString("The dice number is " + std::to_string(m_diceRoll) + "\nThe second number is " + std::to_string(m_secondRoll) + "\nThe third number is " + std::to_string(m_thirdRoll));
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

	//Display the message with the dice number on the console window here
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
