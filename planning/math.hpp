#include  <cmath>

namespace planning {

struct vector2d {
    double x = 0.0, y = 0.0;

    friend vector2d operator+(vector2d a, vector2d b){
    return {a.x + b.x, a.y + b.y};
    }
    friend vector2d operator-(vector2d a, vector2d b){
        return {a.x - b.x, a.y - b.y};
    }
    friend vector2d operator*(vector2d a, double scalar){
        return {a.x * scalar, a.y * scalar};
    }
};


} //namespace planning


