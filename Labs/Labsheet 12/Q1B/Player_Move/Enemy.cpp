// Enemy class

#include "Enemy.h"   // include Enemy header file


// Definition of member functions of the Enemy class


Enemy::Enemy() // default constructor
{
	loadImage(); // load the image file for the sprite

	setPosition(100, 400);  // set the position of the Enemy sprite

	m_strength = (rand() % 10) + 1;
	m_direction = (rand() % 2) + 1;        // Generates a random number between 1 and 2
	m_speed = 5;
	m_alive = true;
	m_image_enemy_width = 124;
}

void Enemy::loadImage()
// Loads the image for the Enemy object
{
	if (!m_texture.loadFromFile("ASSETS/IMAGES/EnemyGuy.bmp"))
	{
		std::cout << "error with Enemy image file";
	}

	m_sprite.setTexture(m_texture,true);
}



sf::Sprite Enemy::getBody() // get the Enemy's body
{
	return m_sprite;
}



void Enemy::setPosition()  // set the position of the Enemy on the screen
{
	sf::Vector2f pos(100, 400);
	m_sprite.setPosition(pos);
}


void Enemy::setPosition(int t_xPos, int t_yPos)  // set the position of the Enemy on the screen
{
	sf::Vector2f pos(t_xPos, t_yPos);
	m_sprite.setPosition(pos);
}

void Enemy::move()
{
	sf::Vector2f pos = m_sprite.getPosition();

	pos.x += m_speed;

	if (pos.x >= SCREEN_WIDTH)
	{
		pos.x = 0 - m_image_enemy_width;
	}

	m_sprite.setPosition(pos);
}