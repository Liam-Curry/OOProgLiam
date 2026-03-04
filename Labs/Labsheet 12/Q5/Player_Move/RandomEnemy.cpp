#include "RandomEnemy.h"
#include <iostream>

RandomEnemy::RandomEnemy()
{
	setupEnemyRand();
	setPosition(100, 400);
}

RandomEnemy::~RandomEnemy()
{
}

void RandomEnemy::setupEnemyRand()
{
	if (!m_textureRand.loadFromFile("ASSETS/IMAGES/EnemyGuy.bmp"))
	{
		std::cout << "error with player image file";
	}

	m_spriteRand.setTexture(m_textureRand, true);
}

void RandomEnemy::setPosition(int t_xPos, int t_yPos)  // set the position of the Enemy on the screen
{
	sf::Vector2f pos(t_xPos, t_yPos);
	m_spriteRand.setPosition(pos);
}

sf::Sprite RandomEnemy::getBodyRand()
{
	return m_spriteRand;
}

void RandomEnemy::changeDirection()
{
	directionType();
	int numberGen = (rand() % 10) + 1;
	if(numberGen == 5)
	{
		m_directionRand = (rand() % 4) + 1;
		directionType();
	}
}

void RandomEnemy::directionType()
{
	sf::Vector2f pos = m_spriteRand.getPosition();
	if (m_directionRand == NORTH)
	{
		pos.y -= m_speedRand;
		if (pos.y <= 0)
		{
			pos.y = 0;
		}
	}
	if (m_directionRand == SOUTH)
	{
		pos.y += m_speedRand;
		if (pos.y >= SCREEN_HEIGHT - m_imageHeight)
		{
			pos.y = SCREEN_HEIGHT - m_imageHeight;
		}
	}
	if (m_directionRand == WEST)
	{
		pos.x -= m_speedRand;
		if (pos.x <= 0)
		{
			pos.x = 0;
		}
	}
	if (m_directionRand == EAST)
	{
		pos.x += m_speedRand;
		if (pos.x >= SCREEN_WIDTH - m_imageWidth)
		{
			pos.x = SCREEN_WIDTH - m_imageWidth;
		}
	}
	m_spriteRand.setPosition(pos);
}

void RandomEnemy::randomSpeed()
{
	int numberGen = (rand() % 20) + 1;
	if (numberGen == 16)
	{
		m_speedRand = (rand() % 30) + 1;
	}
}
