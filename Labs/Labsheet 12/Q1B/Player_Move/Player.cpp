// Player class

#include "Player.h"   // include Player header file


// Definition of member functions of the Player class


Player::Player() // default constructor
{
	loadImage(); // load the image file for the sprite

	m_image_width = 124; // the width of the image in pixels

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
/// Moves the player in the direction pressed
/// </summary>

void Player::move()
{

	sf::Vector2f pos = m_sprite.getPosition();

	if (m_direction == NORTH)
	{
		pos.y = pos.y - m_speed;
	}

	if (m_direction == SOUTH)
	{
		pos.y = pos.y + m_speed;
	}

	if (m_direction == WEST)
	{
		pos.x = pos.x - m_speed;
	}

	if (m_direction == EAST)
	{
		pos.x = pos.x + m_speed;
	}

	m_sprite.setPosition(pos);
}

/// <summary>
/// Changes the m_direction variable based on input
/// </summary>
/// <param name="t_direction"> Direction </param>

void Player::changeDirection(int t_direction)
{
	if (t_direction == 1)
	{
		m_direction = NORTH;
	}

	if (t_direction == 2)
	{
		m_direction = SOUTH;
	}

	if (t_direction == 3)
	{
		m_direction = WEST;
	}

	if (t_direction == 4)
	{
		m_direction = EAST;
	}
}
