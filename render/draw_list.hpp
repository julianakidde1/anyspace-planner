#pragma once

#include <cstdint> //uint8_t

namespace render {
    
enum class DrawKind : std::uint8_t { // std::unit8_t makes it 1 byte instead of 4
    Circle = 0,
    CircleLines, // outline of a circle
    Line,
    Rectangle ,
    Triangle,
}; 

struct Rgba { // color struct
    std::uint8_t r = 255, 
                g = 255, 
                b = 255,
                a = 255;
};

struct DrawCommand {
    float x0 = 0, y0 = 0, x1 = 0, y1 = 0; //geometry slots for the shapes
    float thickness = 1.0f; // the width of the shape* outline in meters (scaled by camera zoom)
          
    Rgba color{}; // {} = default member initializer
    DrawKind kind = DrawKind::Circle;
    std::uint8_t material = 0;  
    std::uint16_t layer = 0; // the drawing order 
    std::uint32_t reserved = 0; // the padding that gets the struct to 32_bytes for cache lines
};

} // namespace render