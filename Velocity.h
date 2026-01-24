struct Velocity {
    int x_velocity;
    int y_velocity;
    
    Velocity() {
        x_velocity = 0;
        y_velocity = 0;
    }

    Velocity(int initial_x_velocity, int initial_y_velocity) {
        x_velocity = initial_x_velocity;
        y_velocity = initial_y_velocity;
    }
};