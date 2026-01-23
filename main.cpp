#include "Plane.cpp"

int main() {
    Plane testing_plane;
    Particle testing_particle(10, 10, 0);
    vector<Particle> all_particles;
    all_particles.push_back(testing_particle);
    testing_plane.setParticleGrid(all_particles);
    
    testing_plane.displayPlane();
    return 0;
}