class Particle {
    public:
        void setXPosition(int new_x_position);
        void setYPosition(int new_y_position);
        int getXPosition();
        int getYPosition();
    private:
        int x_position;
        int y_position;
};