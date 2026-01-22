#include "Particle.cpp"
#include "Plane.cpp"

int main() {
    Plane testing_plane;
    Particle testing_particle(5, 5, 0);
    vector<Particle> all_particles;
    all_particles.push_back(testing_particle);
    
    testing_plane.displayPlane(all_particles);
    return 0;
}