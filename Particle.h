class Particle {
    public:
        Particle(int initial_x_position, int intitial_y_position, int initial_velocity);
        void setXPosition(int new_x_position);
        void setYPosition(int new_y_position);
        void setVelocity(int new_velocity);
        int getXPosition();
        int getYPosition();
        int getVelocity();
    private:
        int x_position;
        int y_position;
        int velocity;
};