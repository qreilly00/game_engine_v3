#include "Sprite.hpp"

void Sprite::createSprite() {
    /*
	0 = color
	1 = sprite
	*/

    switch(sStyleMode) {
        case 0:
            sprite.setColor(sColor);
        break;
        case 1:
            sprite.setTexture(sTexture);
        break;
    }

    sprite.setPosition(sPosition);
    sprite.setSize(sSize);
}
