#include "Window.hpp"

Window::Window() {
    wSize = sf::Vector2i(500, 500);
    wPosition = sf::Vector2i(0, 0);
    wName = "Test";
    wFramerate = 0;
    wStyleMode = 3;
    inputs.resize(10);
}

Window::Window(sf::Vector2i wSze, sf::Vector2i wPos, std::string wNme, int wFrmrte, int wStyleMde) {
    wSize = wSze;
    wPosition = wPos;
    wName = wNme;
    wFramerate = wFrmrte;
    wStyleMode = wStyleMde;
    inputs.resize(10);
}
