class Plane {
    public:
        Plane(int initial_x_axis, int initial_y_axis);
        void set_x_axis(int new_x_axis);
        void set_y_axis(int new_y_axis);
        int get_x_axis();
        int get_y_axis();
    private:
        int x_axis;
        int y_axis;
};