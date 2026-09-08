#include  <cmath>
#include "state.hpp"

namespace planning {

    struct Controller {
        double v = 0.0; //forward speed (m/s)
        double omega = 0.0; // yaw rate (rad/s)
    };

} //namespace planning
