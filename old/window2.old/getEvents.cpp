#include "Window.hpp"

void Window::getEvents() {
    while(window.pollEvent(event)) {
        if(event.type == sf::Event::Closed) {
            inputs[0] = 1;
        }
        if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::W)) {
            inputs[1] = 1;
        }
        if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::S)) {
            inputs[2] = 1;
        }
        if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::A)) {
            inputs[3] = 1;
        }
        if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::D)) {
            inputs[4] = 1;
        }
        if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::E)) {
            inputs[5] = 1;
        }
        if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Q)) {
            inputs[6] = 1;
        }
        if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Space)) {
            inputs[7] = 1;
        }
        if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Tab)) {
            inputs[8] = 1;
        }
        if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape)) {
            inputs[9] = 1;
        }
    }
}
