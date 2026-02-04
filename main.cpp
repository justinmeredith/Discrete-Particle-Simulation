#include "Plane.cpp"
using std::cin;

string menu_line = "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";

int main() {
    Plane testing_plane;
    Particle testing_particle(10, 3, Velocity(-2, 3));
    vector<Particle> all_particles;
    string user_input;

    // Code for testing, will be removed shortly
    // // Starting state
    // all_particles.push_back(testing_particle);
    // testing_plane.setParticleGrid(all_particles);
    // testing_plane.displayPlane();

    // // Second state
    // all_particles.at(0).updatePosition(2);
    // testing_plane.setParticleGrid(all_particles);
    // testing_plane.displayPlane();


    // Header
    cout << endl << "_______| Discrete Particle Simulation |_______" << endl << endl;
    cout << "           by Justin Meredith, 2026" << endl << endl;
    cout << menu_line << endl << endl;

    while (1) {
        // Main menu
        cout << "_| Main Menu |_" << endl;
        cout << "    To choose a menu option, type its corresponding number " << endl << "    followed by the 'return'/'enter' key." << endl << endl;
        cout << "    0. Exit the program." << endl << endl;
        cout << " -> Your Selection: ";
        cin >> user_input;

        // Main menu choices
        if (user_input == "0") {
            cout << endl << "Exiting the program..." << endl;
            return 0;
        } else {
            cout << endl;
            cout << "**ERROR** Your input did not register as a valid option." << endl;
            cout << "          Please enter the number that corresponds with your" << endl;
            cout << "          desired menu operation, then press the 'return'/'enter' key." << endl;
        }

        cout << endl << menu_line << endl;
    }
}