#include "Window.hpp"

void Window::getEvents() {
    while(window.pollEvent(event)) {
        if(event.type == sf::Event::Closed) {
            userInputs[0] = 1;
        }
        if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::W)) {
            userInputs[1] = 1;
        }
        if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::S)) {
            userInputs[2] = 1;
        }
        if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::A)) {
            userInputs[3] = 1;
        }
        if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::D)) {
            userInputs[4] = 1;
        }
        if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::E)) {
            userInputs[5] = 1;
        }
        if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Q)) {
            userInputs[6] = 1;
        }
        if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Space)) {
            userInputs[7] = 1;
        }
        if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Tab)) {
            userInputs[8] = 1;
        }
        if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape)) {
            userInputs[9] = 1;
        }
    }
}
