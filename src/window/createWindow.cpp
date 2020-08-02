#include "Window.hpp"

void Window::createWindow() {
    /*
	0 = none
	1 = titlebar and close
	2 = fullscreen
	3 = default (titlebar, resize and close)
	*/

    switch(wStyleMode) {
        case 0:
            window.create(sf::VideoMode(wSize.x, wSize.y), wName, sf::Style::None);
        break;
        case 1:
            window.create(sf::VideoMode(wSize.x, wSize.y), wName, sf::Style::Titlebar | sf::Style::Close);
        break;
        case 2:
            window.create(sf::VideoMode(wSize.x, wSize.y), wName, sf::Style::Fullscreen);
        break;
        case 3:
            window.create(sf::VideoMode(wSize.x, wSize.y), wName, sf::Style::Default);
        break;
    }

    if(wFramerate != 0) {
        window.setFramerateLimit(wFramerate);
    }

    window.setPosition(wPosition);
}
