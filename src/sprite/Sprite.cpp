#include "Sprite.hpp"

Sprite::Sprite() {
    sSize = sf::Vector2f(32, 32);
    sPosition = sf::Vector2f(0, 0);

    sColor = sf::Color::Black;

    sName = "sprite";

    sStyleMode = 0;
    sSpeed = 400;
    sHealth = 100;

    sIsCollidable = 1;
    sIsVisible = 1;
    sIsImmortal = 0;
}

Sprite::Sprite(sf::Vector2f input1, sf::Vector2f input2, sf::Color input3, std::string input4, int input5, int input6, bool input7, bool input8, bool input9, int input10) {
    sSize = input1;
    sPosition = input2;

    sColor = input3;

    sName = input4;

    sStyleMode = input10;
    sSpeed = input5;
    sHealth = input6;

    sIsCollidable = input7;
    sIsVisible = input8;
    sIsImmortal = input9;
}
