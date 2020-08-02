#include "Window.hpp"

void Window::draw(sf::RectangleShape recspe) {
    window.draw(recspe);
}

void Window::draw(std::vector<sf::RectangleShape> &recspe) {
    for(int i = 0; i < recspe.size(); i++) {
        window.draw(recspe[i]);
    }
}
