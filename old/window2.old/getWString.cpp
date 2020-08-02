#include "Window.hpp"

std::string Window::getWString(int option) {
    if(option == 0) { // 0 = wName
        return wName;
    } else {
        return "null";
    }
}
