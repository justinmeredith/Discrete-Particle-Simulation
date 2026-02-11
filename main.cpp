#include "Plane.cpp"
using std::cin;

void clearCin() {
    cin.ignore();
    cin.clear();
};

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
        cout << "    1. Run the simulation." << endl;
        cout << "    2. Add a particle." << endl;
        cout << "    3. Remove a particle." << endl;
        cout << "    4. View particles." << endl;
        cout << "    0. Exit the program." << endl << endl;
        cout << " -> Your Selection: ";
        cin >> user_input;
        clearCin();
        cout << menu_line;

        // Main menu choices
        if (user_input == "0") {
            // Exits the program
            cout << endl << "Exiting the program..." << endl;
            return 0;
        } else if (user_input == "1") {
            // Runs the simulation
            cout << "Option 1 selected; not currently functional" << endl;
        } else if (user_input == "2") {
            // Adds a particle
            cout << "Option 2 selected; not currently functional" << endl;
            cout << "To create a particle, enter its x-position, y-position, and initial velocity separated by commas." << endl;
            cout << "Each value should be an integer. Example input: 2, 3, 5. In this example, the x-position is 2," << endl;
            cout << "the y-position is 3, and the velocity is 5." << endl << endl;
            cout << " -> Your Selection: ";
            cin >> user_input;
            // Need to split user_input into tokens and create a particle from it
        } else if (user_input == "3") {
            // Removes a particle
            cout << "Option 3 selected; not currently functional" << endl;
        } else if (user_input == "4") {
            // Shows all currently existing particles to the user
        } else {
            // Handles invalid input
            cout << endl;
            cout << "**ERROR** Your input did not register as a valid option." << endl;
            cout << "          Please enter the number that corresponds with your" << endl;
            cout << "          desired menu operation, then press the 'return'/'enter' key." << endl;
        }

        cout << endl << menu_line << endl;
    }
}