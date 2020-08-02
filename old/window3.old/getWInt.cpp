#include "Window.hpp"

int Window::getWInt(int option) {
    if(option == 0) { // 0 = wFramerate
        return wFramerate;
    } else if(option == 1) { // 1 = wStyleMode
        return wStyleMode;
    } else {
        return -1;
    }
}
