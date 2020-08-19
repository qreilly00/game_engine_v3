#ifndef SPRITE_HPP
#define SPRITE_HPP

#include "../../inc/common.hpp"

class Sprite {
private:

	// declared object variables
	sf::Sprite sprite;

	sf::Texture sTexture;

	sf::Vector2f sSize;
	sf::Vector2f sPosition;

	sf::Color sColor;

	std::string sName;

	int sStyleMode; // 0 = color, 1 = sprite
	int sSpeed;
	int sHealth;

	bool sIsCollidable;
	bool sIsVisible;
	bool sIsImmortal;

public:

	// class initializer
	Sprite();
	Sprite(sf::Vector2f input1, sf::Vector2f input2, sf::Color input3, std::string input4, int input5, int input6, bool input7, bool input8, bool input9, int input10);

	// object control functions
	void createSprite();
	void moveSprite();
	void checkCollision();

	// variable control functions
	sf::Vector2f getSSize();
	sf::Vector2f getSPosition();
	sf::Color getSColor();
	std::string getSName();
	int getSSpeed();
	int getSHealth();
	bool getSIsCollidable();
	bool getSIsVisible();
	bool getSIsImmortal();

	void setSSize(sf::Vector2f input);
	void setSPosition(sf::Vector2f input);
	void setSColor(sf::Color input);
	void setSName(std::string input);
	void setSSpeed(int input);
	void setSHealth(int input);
	void setSIsCollidable(bool input);
	void setSIsVisible(bool input);
	void setSIsImmortal(bool input);

};

#endif

/*

rectangle shape and properties
create shape?
movement
collision

*/
