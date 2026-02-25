// Player class

#include "Player.h"   // include Player header file


// Definition of member functions of the Player class


Player::Player() // default constructor
{
	loadImage(); // load the image file for the sprite

	m_image_width = 124; // the width of the image in pixels
	m_scaled = false; // the image is not scaled

	sf::Vector2f pos(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2); // place the player object in the centre of the screen
	m_sprite.setPosition(pos);  // set the position of the players sprite

	m_speed = 5; // the average speed
	m_direction = (rand() % 2) + 1;        // Generates a random number between 1 and 2
	m_lives = 3;
}


void Player::loadImage()
// Loads the image for the player object
{
	if (!m_texture.loadFromFile("ASSETS/IMAGES/SquareGuy.bmp"))
	{
		std::cout << "error with player image file";
	}

	m_sprite.setTexture(m_texture, true);
}



sf::Sprite Player::getBody() // get the player's body
{
	return m_sprite;
}


void Player::setPosition()  // set the position of the player on the screen
{
	sf::Vector2f pos(200, 40);
	m_sprite.setPosition(pos);
}


void Player::setPosition(int t_xPos, int t_yPos)  // set the position of the player on the screen
{
	sf::Vector2f pos(t_xPos, t_yPos);
	m_sprite.setPosition(pos);
}

/// <summary>
/// Moves the player, if it hits the right wall it changed direction
/// </summary>

void Player::move()
{
	sf::Vector2f pos = m_sprite.getPosition();

	// Moves Right
	if (m_direction == EAST)
	{
		pos.x += m_speed;
	}

	// Moves Left
	if (m_direction == WEST)
	{
		pos.x -= m_speed;
	}

	// If hits right wall
	if (pos.x >= SCREEN_WIDTH-m_image_width)
	{
		m_direction = WEST;
	}

	// If hits left wall
	if (pos.x <= 0)
	{
		m_direction = EAST;
	}

	m_sprite.setPosition(pos);
}

/// <summary>
/// Increases player speed by 1 on every button press
/// </summary>

void Player::increaseSpeed()
{
	if (m_speed >= 15)
	{
		m_speed = 15;
	}
	else
	{
		m_speed = m_speed + 1;
	}
}

/// <summary>
/// Decreases player speed by 1 every button press
/// </summary>

void Player::decreaseSpeed()
{
	if (m_speed <= 1)
	{
		m_speed = 1;
	}
	else
	{
		m_speed = m_speed - 1;
	}
}

/// <summary>
/// Increases the players size by 1.5 on button press
/// </summary>

void Player::increaseSize()
{
	if (m_scaled == false)
	{
		m_scaled = true;
		m_image_width = m_image_width * 1.5f;
		m_sprite.setScale(sf::Vector2f{ 1.5f, 1.5f });
	}
}

/// <summary>
/// Changes colour of the player
/// </summary>

void Player::changeColour()
{
	int color = (rand() % 5) + 1; // Between 1-5

	switch (color)
	{
	case 1:
		m_sprite.setColor(sf::Color::Red);
		break;
	case 2:
		m_sprite.setColor(sf::Color::Blue);
		break;
	case 3:
		m_sprite.setColor(sf::Color::Yellow);
		break;
	case 4:
		m_sprite.setColor(sf::Color::Green);
		break;
	case 5:
		m_sprite.setColor(sf::Color::White);
		break;
	default:
		break;
	}
}

/// <summary>
/// Changes player direction
/// </summary>

void Player::changeDirection()
{
	if (m_direction == WEST)
	{
		m_direction = EAST;
	}
	else if (m_direction == EAST)
	{
		m_direction = WEST;
	}
}
