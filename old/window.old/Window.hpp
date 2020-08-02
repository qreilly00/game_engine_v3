#ifndef WINDOW_HPP
#define WINDOW_HPP

#include "../../inc/common.hpp"

class Window {
private:

	// initialize window variables
	sf::RenderWindow window;
	sf::Vector2i wSize;
	sf::Vector2i wPosition;

	std::string wName;

	int wFramerate; // 0 = noLimit
	int wStyleMode;
	/*
	0 = none
	1 = titlebar and close
	2 = fullscreen
	3 = default (titlebar, resize and close)
	*/

public:

	// class initializer
	Window();
	Window(sf::Vector2i wSze, sf::Vector2i wPos, std::string wNme, int wFrmrte, int wStyleMde);

	// creates new window using variables from above.
	void createWindow();

	// variable control functions
	void setWSize(sf::Vector2i wSze);
	void setWPosition(sf::Vector2i wPos);
	void setWName(std::string wNme);
	void setWFramerate(int wFrmrte);
	void setWStyleMode(int wStyleMde);

	sf::Vector2i getWSize();
	sf::Vector2i getWPosition();
	std::string getWName();
	int getWFramerate();
	int getWStyleMode();

	// window control functions
	void close();
	bool isOpen();

	void clear();
	void clear(sf::Color clr);
	void draw(sf::RectangleShape recspe);
	void draw(std::vector<sf::RectangleShape> &recspe);
	void display();
};

#endif
