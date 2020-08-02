#include "Window.hpp"

void Window::setWVector2i(sf::Vector2i input, int option) {
    if(option == 0) { // 0 = wSize
        wSize = input;
    } else if(option == 1) { // 1 = wPosition
        wPosition = input;
    }
}
