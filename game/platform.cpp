#include "platform.hpp"

#include <raylib.h>
#include <raymath.h>

namespace platform {

    bool initialize (int width, int height, const char* title) {
        InitWindow(width, height, title);
        return true;
    }
}