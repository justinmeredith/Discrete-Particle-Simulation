#include "Velocity.h"

class Particle {
    public:
        Particle(int initial_x_position, int intitial_y_position, Velocity initial_velocity);
        Particle();
        void setXPosition(int new_x_position);
        void setYPosition(int new_y_position);
        void setVelocity(Velocity new_velocity);
        int getXPosition();
        int getYPosition();
        Velocity getVelocity();
        void updatePosition(int time_step);
    private:
        int x_position;
        int y_position;
        Velocity velocity;
};