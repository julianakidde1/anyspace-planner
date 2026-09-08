namespace planning {
    struct State {
        double x = 0.0;
        double y = 0.0;
        double theta = 0.0; //orientation
        double v = 0.0;  //forward velocity
        double omega = 0.0; //angular velocity
    };

    struct vector2d {
        double x,y = 0.0;
    };

    //vector operations
    vector2d operator+(vector2d a, vector2d b){
        return {a.x + b.x, a.y + b.y};
    }
    vector2d operator-(vector2d a, vector2d b){
        return {a.x - b.x, a.y - b.y};
    }
    vector2d operator*(vector2d a, double scalar){
        return {a.x * scalar, a.y * scalar};
    }

}