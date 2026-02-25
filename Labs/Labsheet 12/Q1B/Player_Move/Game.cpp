// Name: 
// Login: 
// Date: 
// Approx hours of work : 
//---------------------------------------------------------------------------
//	Player B - template 
/*
1. Make the player move up, down, left and right via the arrow keys.
2. Add an array of 5 enemies that move from left to right across the screen. Each enemy should start at the left side of the
   console window. When they reach the boundary of the screen on the right they should start from the left again and
   move left to right again and so on.
   Position them at different y values.
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
	m_window{ sf::VideoMode{ sf::Vector2u{1500U, 800U}, 32U }, "Player B - template" },
	m_exitGame{ false } //when true game will exit
{
	setupTexts(); // load font 
	setupSprites(); // load texture
	setupEnemies();  // initialize enemy objects
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
	
	// calls the player object to move itself in the appropriate direction

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
	{
		m_myPlayer.changeDirection(1);
		m_myPlayer.move();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
	{
		m_myPlayer.changeDirection(2);
		m_myPlayer.move();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
	{
		m_myPlayer.changeDirection(3);
		m_myPlayer.move();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
	{
		m_myPlayer.changeDirection(4);
		m_myPlayer.move();
	}



}

/// <summary>
/// Update the game world
/// </summary>
/// <param name="t_deltaTime">time interval per frame</param>
void Game::update(sf::Time t_deltaTime)
{
	checkKeyboardState();
	
	m_welcomeMessage.setString("The player should move via the arrow keys. \nAdd an array of 5 enemies that move to the right and wrap around.");
	if (m_exitGame)
	{
		m_window.close();
	}

	// call the enemy objects to move themselves in the appropriate direction
	for (int i = 0; i < NO_OF_ENEMIES; i++)
	{
		m_enemyOne[i].move();
	}
}

/// <summary>
/// draw the frame and then switch buffers
/// </summary>
void Game::render()
{
	m_window.clear(sf::Color::White);
	m_window.draw(m_backgroundSprite);  // draw the background image
	m_window.draw(m_welcomeMessage);    // draw the text

	m_window.draw(m_myPlayer.getBody()); // draw the player object

	for (int i = 0; i < NO_OF_ENEMIES; i++)
	{
		m_window.draw(m_enemyOne[i].getBody());  // draw the enemy object
	}

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
	m_welcomeMessage.setCharacterSize(25U);
	m_welcomeMessage.setOutlineColor(sf::Color::Black);
	m_welcomeMessage.setFillColor(sf::Color::Red);
	m_welcomeMessage.setOutlineThickness(2.0f);

}

/// <summary>
/// load the texture and setup the sprite for the background image
/// </summary>
void Game::setupSprites()
{
	if (!m_backgroundTexture.loadFromFile("ASSETS\\IMAGES\\Asteroids Image.jpg"))
	{
		// simple error message if previous call fails
		std::cout << "problem loading logo" << std::endl;
	}

	m_backgroundSprite.setTexture(m_backgroundTexture, true);// to reset the dimensions of texture
	m_backgroundSprite.setPosition(sf::Vector2f{ 150.0f, 50.0f });
}



/// <summary>
/// Set up the enemy object(s) as needed
/// </summary>
void Game::setupEnemies()
{
	int posx = 100;
	int posy = 100;
	for (int i = 0; i < NO_OF_ENEMIES; i++)
	{
		m_enemyOne[i].setPosition(posx, posy);
		posy = posy + 125; // changes for next enemy sprite
	}
}