// Enemy class declaration
#pragma once

#include "SFML/Graphics.hpp" 
#include "Globals.h"   // include Global header file
#include <iostream>

class Enemy
{
	// the data members are private by default

	sf::Texture m_texture; // texture for Enemy
	sf::Sprite m_sprite{ m_texture };   // sprite used to represent Enemy

	int m_strength; // the strength of the Enemy 1-10
	int m_direction; // is the Enemy moving east or west
	int m_speed;   // the speed that the Enemy moves
	int m_image_enemy_width;
	bool m_alive;    // is the enemy alive


public:	  // declaration of member functions	

	Enemy(); // default constructor
	void loadImage(); // load the image 

	sf::Sprite getBody();
	void setPosition();
	void setPosition(int xPos, int yPos);
	void move();
};
