#ifndef WINDOW_HPP
#define WINDOW_HPP

#include "../../inc/common.hpp"

class Window {
private:

	// declared window variables
	sf::RenderWindow window;

	sf::Vector2i wSize;
	sf::Vector2i wPosition;

	std::string wName;

	int wFramerate; // 0 = noLimit
	int wStyleMode; // 0 = none, 1 = titlebar and close, 2 = fullscreen, 3 = default (titlebar, resize and close)

	sf::Event event;
	std::vector<bool> userInputs; // 0 = window close, 1 = W, 2 = S, 3 = A, 4 = D, 5 = E, 6 = Q, 7 = space, 8 = tab, 9 = escape

public:

	// class initializer
	Window();
	Window(sf::Vector2i wSze, sf::Vector2i wPos, std::string wNme, int wFrmrte, int wStyleMde);

	// window control functions
	void createWindow();

	void close();
	bool isOpen();

	void clear();
	void clear(sf::Color clr);
	void draw(sf::RectangleShape recspe);
	void draw(std::vector<sf::RectangleShape> &recspe);
	void display();

	// input control functions
	void getEvents();

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

	std::vector<bool>& getUserInputs();
	void resetUserInputs();

};

#endif
