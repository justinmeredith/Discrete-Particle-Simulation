#include "Plane.h"

Plane::Plane(int initial_x_axis, int initial_y_axis) {
    x_axis = initial_x_axis;
    y_axis = initial_y_axis;
}

void Plane::set_x_axis(int new_x_axis) {
    x_axis = new_x_axis;
}

void Plane::set_y_axis(int new_y_axis) {
    y_axis = new_y_axis;
}

int Plane::get_x_axis() {
    return x_axis;
}

int Plane::get_y_axis() {
    return y_axis;
}