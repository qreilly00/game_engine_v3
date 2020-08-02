#include "Window.hpp"

void Window::setWString(std::string input, int option) {
    if(option == 0) { // 0 = wName
        wName = input;
    }
}
