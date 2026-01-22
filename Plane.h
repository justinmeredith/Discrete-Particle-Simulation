class Plane {
    public:
        Plane(int initial_x_axis, int initial_y_axis);
        Plane();
        void setXAxis(int new_x_axis);
        void setYAxis(int new_y_axis);
        int getXAxis();
        int getYAxis();
        void displayPlane();
    private:
        int x_axis;
        int y_axis;
};