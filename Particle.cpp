#include "Particle.h"

// The class that creates particle objects

// Constructor with arguments
Particle::Particle(int initial_x_position, int intitial_y_position, Velocity initial_velocity) {
    x_position = initial_x_position;
    y_position = intitial_y_position;
    velocity = initial_velocity;
}

// Constructor without arguments
Particle::Particle() {
    x_position = 0;
    y_position = 0;
}

void Particle::setXPosition(int new_x_position) {
    x_position = new_x_position;
}

void Particle::setYPosition(int new_y_position) {
    y_position = new_y_position;
}

void Particle::setVelocity(Velocity new_velocity) {
    velocity = new_velocity;
}

int Particle::getXPosition(){
    return x_position;
}

int Particle::getYPosition(){
    return y_position;
}

Velocity Particle::getVelocity() {
    return velocity;
}

void Particle::updatePosition(int time_step) {
    x_position = x_position + (velocity.x_velocity * time_step);
    y_position = y_position + (velocity.y_velocity * time_step);
}