#pragma once
#include "SFML/Graphics.hpp" 
#include "Globals.h"

class RandomEnemy
{
public: // functions
	RandomEnemy();
	~RandomEnemy();
	void setupEnemyRand();
	void setPosition(int t_xPos, int t_yPos);
	sf::Sprite getBodyRand();
	void changeDirection();
	void directionType();
	void randomSpeed();

private: // data types

	sf::Texture m_textureRand; // texture for Enemy
	sf::Sprite m_spriteRand{ m_textureRand };   // sprite used to represent Enemy

	int m_directionRand = (rand() % 4) + 1;
	int m_speedRand = 5;
	float m_imageHeight = 97.0f;
	float m_imageWidth = 124.0f;
};