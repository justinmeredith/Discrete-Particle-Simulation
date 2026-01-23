#include <vector>
#include <string>
#include "Particle.cpp"

using std::vector;
using std::string;

class Plane {
    public:
        Plane(int initial_x_axis, int initial_y_axis);
        Plane();
        void setXAxis(int new_x_axis);
        void setYAxis(int new_y_axis);
        int getXAxis();
        int getYAxis();
        void setParticleGrid(vector<Particle> particles_in_plane);
        void displayPlane();
    private:
        int x_axis;
        int y_axis;
        vector<vector<string>> particle_grid;
};