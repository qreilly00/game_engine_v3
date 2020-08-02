#include "Window.hpp"

sf::Vector2i Window::getWVector2i(int option) {
    if(option == 0) { // 0 = wSize
        return wSize;
    } else if(option == 1) { // 1 = wPosition
        return wPosition;
    } else {
        return sf::Vector2i(-1, -1);
    }
}
