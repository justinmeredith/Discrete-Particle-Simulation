#include "Plane.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

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

void Plane::displayPlane(vector<Particle> particles_in_plane) {
    string printable_x_axis;
    // Creates an x-axis of spaces
    for (int i = 0; i < x_axis; ++i) {
        printable_x_axis += "  ";
    }

    // Prints the plane 
    for (int i = 0; i < y_axis; ++i) {
        cout << "[" << printable_x_axis << "]" << endl;
    }
}