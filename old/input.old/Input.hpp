#ifndef INPUT_HPP
#define INPUT_HPP

#include "../../inc/common.hpp"

class Input {
private:

	sf::Event event;
	std::vector<bool> inputs;
	/*
	0 = window close
	1 = W
	2 = S
	3 = A
	4 = D
	5 = E
	6 = Q
	7 = space
	8 = tab
	9 = escape
	*/

public:

	// class initializer
	Input();
	~Input();

	// get user input method
	void getEvents(sf::RenderWindow &window);

	// variable control functions
	std::vector<bool>& getInputs();

	void resetInputs();
};

#endif
