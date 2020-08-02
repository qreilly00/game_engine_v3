#include "Window.hpp"

void Window::setWInt(int input, int option) {
    if(option == 0) { // 0 = wFramerate
        wFramerate = input;
    } else if(option == 1) { // 1 = wStyleMode
        wStyleMode = input;
    }
}
