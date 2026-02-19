#include "Plane.cpp"
using std::cin;

void clearCin() {
    cin.ignore();
    cin.clear();
}

void updateParticlePositions(int time_step, vector<Particle>& particles) {
    for (int i = 0; i < particles.size(); ++i) {
        particles.at(i).updatePosition(time_step);
    }
}

void runParticleSimulation(int time_step, vector<Particle>& all_particles, Plane& testing_plane) {
    cout << endl << endl;
    testing_plane.setParticleGrid(all_particles);
    testing_plane.displayPlane();
    updateParticlePositions(time_step, all_particles);
}

string menu_line = "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";

int main() {
    Plane testing_plane;
    vector<Particle> all_particles;
    string user_input;

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
            int time_step;
            int updates;

            // Possible input design:
            // Get input to determine how many time steps to take between plane displays (i.e., the X that we're feeding to 
            // to the Plane.updatePlane(X) function)
            // Loop that keeps checking for user input
                // If user enters a number Y, display the plane Y times, updating between each display
                // If the user doesn't enter anything, display and update the plane 1 times
                // If the user enters a "quit" character like Q or maybe just any other input besides a valid number,
                // stop displaying updates and return to the main menu
            clearCin();
            cout << "How many time steps would you like to pass between updates?" << endl;
            cout << " -> Time Steps: ";
            cin >> time_step;
            clearCin();
            cout << "How many updates would you like to simulate?" << endl;
            cout << " -> Updates: ";
            cin >> updates;

            for (int i = 0; i < updates; ++i) {
                runParticleSimulation(time_step, all_particles, testing_plane);
            }


        } else if (user_input == "2") {
            // Adds a particle
            int x_initial;
            int y_initial;
            int x_velocity_initial;
            int y_velocity_initial;

            cout << "To create a particle, enter its x-position, y-position, and initial x- and y-velocity." << endl;
            cout << "Each value should be an integer. Example input: 2, 3, 5." << endl << endl;

            // Needs input validation
            cout << " -> x-position: ";
            cin >> x_initial;
            cout << " -> y-position: ";
            cin >> y_initial;
            cout << " -> initial x-velocity: ";
            cin >> x_velocity_initial;
            cout << " -> initial y-velocity: ";
            cin >> y_velocity_initial;

            Velocity velocity_initial(x_velocity_initial, y_velocity_initial);

            all_particles.push_back(Particle(x_initial, y_initial, velocity_initial));
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