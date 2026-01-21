#include "Particle.h"

Particle::Particle(int initial_x_position, int intitial_y_position, int initial_velocity) {
    x_position = initial_x_position;
    y_position = intitial_y_position;
    velocity = initial_velocity;
}

void Particle::setXPosition(int new_x_position) {
    x_position = new_x_position;
}

void Particle::setYPosition(int new_y_position) {
    y_position = new_y_position;
}

void Particle::setVelocity(int new_velocity) {
    velocity = new_velocity;
}

int Particle::getXPosition(){
    return x_position;
}

int Particle::getYPosition(){
    return y_position;
}

int Particle::getVelocity() {
    return velocity;
}