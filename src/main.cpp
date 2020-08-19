//include classes and headers
#include "../inc/common.hpp"
#include "window/Window.hpp"

/*

Note to self:
Main execution loop will be in main or in a class of its own.
It is important to make each class as accessible and independent as
possible so that they can be integrated into the loop.

Next time, test to see if you can call a class of an object in the function of another object.

*/

int main() {
    Window w;

    w.createWindow();

    bool exit = 0;

    while(w.isOpen()) {
        w.getEvents();

        if(w.getUserInputs()[0] == 1 || w.getUserInputs()[9] == 1) {
            w.close();
        }

        w.resetUserInputs();

        w.clear(sf::Color::White);
        //w.draw(rect);
        w.display();
    }

    return 0;
}
