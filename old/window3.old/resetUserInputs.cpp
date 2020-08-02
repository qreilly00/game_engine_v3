#include "Window.hpp"

void Window::resetUserInputs() {
    for(int i = 0; i < userInputs.size(); i++) {
        userInputs[i] = 0;
    };
}
