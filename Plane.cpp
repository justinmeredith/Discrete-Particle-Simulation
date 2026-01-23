#include "Plane.h"
#include <iostream>

using std::cout;
using std::endl;

// The class that serves as a grid or space for the particles to exist in

// Constructor with arguments
Plane::Plane(int initial_x_axis, int initial_y_axis) {
    x_axis = initial_x_axis;
    y_axis = initial_y_axis;
}

// Constructor without arguments
Plane::Plane() {
    x_axis = 20;
    y_axis = 20;
}

void Plane::setXAxis(int new_x_axis) {
    x_axis = new_x_axis;
}

void Plane::setYAxis(int new_y_axis) {
    y_axis = new_y_axis;
}

int Plane::getXAxis() {
    return x_axis;
}

int Plane::getYAxis() {
    return y_axis;
}

void Plane::setParticleGrid(vector<Particle> particles_in_plane) {
    // Sizes the grid and fill each space with two empty spaces
    particle_grid.clear();
    particle_grid.resize(y_axis, vector<string>(x_axis, "  "));
    cout << "Inserting empty spaces works" << endl;

    // Inserts a "o" string in the particle grid for every particle that currently exists
    for (int i = 0; i < particles_in_plane.size(); ++i) {
        Particle current_particle = particles_in_plane.at(i);
        particle_grid.at(current_particle.getYPosition()).at(current_particle.getXPosition()) = "o ";
    }
}

void Plane::displayPlane() {
    for (int y = 0; y < y_axis; ++y) {
        cout << "[";
        for (int x = 0; x < x_axis; ++x) {
            cout << particle_grid.at(y).at(x);
        }
        cout << "]" << endl;
    }
}