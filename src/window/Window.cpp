#include "Window.hpp"

Window::Window() {
    wSize = sf::Vector2i(500, 500);
    wPosition = sf::Vector2i(0, 0);
    wName = "Test";
    wFramerate = 0;
    wStyleMode = 3;
    userInputs.resize(10);
    wColor = sf::Color::White;
}

Window::Window(sf::Vector2i input1, sf::Vector2i input2, std::string input3, int input4, int input5, sf::Color input6) {
    wSize = input1;
    wPosition = input2;
    wName = input3;
    wFramerate = input4;
    wStyleMode = input5;
    userInputs.resize(10);
    wColor = input6;
}
