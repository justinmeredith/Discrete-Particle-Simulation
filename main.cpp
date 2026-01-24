#include "Plane.cpp"

int main() {
    Plane testing_plane;
    Particle testing_particle(10, 3, Velocity(-2, 3));
    vector<Particle> all_particles;

    // This is a very messy testing state, I only have this code here to verify that the velocity component is in basic functioning order
    // A menu or file load-in is necessary to begin streamlining this sort of testing
    // There are also no boundary checks to prevent particles from falling off of the grid

    // Starting state
    all_particles.push_back(testing_particle);
    testing_plane.setParticleGrid(all_particles);
    testing_plane.displayPlane();
    
    cout << "- - - - - - - - - - - - - - - - - - - -" << endl;

    // Second state
    all_particles.at(0).updatePosition(2);
    testing_plane.setParticleGrid(all_particles);
    testing_plane.displayPlane();
    return 0;
}