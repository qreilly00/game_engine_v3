#ifndef OBJECT_HPP
#define OBJECT_HPP

#include "../../inc/common.hpp"

class Object {
private:

	// declared object variables
	sf::RenderWindow object;

	sf::Vector2f oSize;
	sf::Vector2f oPosition;

	sf::Color oColor;

	std::string oName;

public:

	// class initializer
	Object();
	Object();

	// object control functions
	createShape();

	// variable control functions
	sf::Vector2f getOSize();
	sf::Vector2f getPosition();
	sf::Color getOColor();
	std::string getOName();

	void setOSize(sf::Vector2f input);
	void setOPosition(sf::Vector2f input);
	void setOColor(sf::Color input);
	void setOName(std::string input);

};

#endif

/*

rectangle shape and properties
create shape?
movement
collision

*/
