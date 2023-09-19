#include <iomanip>
#include <iostream>
int main() {

    // LRC state should be an int
     //double state;
    int state;
    double squareFeet;
    double time;
    // LRC You don't really need the check variable...see while loop below
    //int check = 0;

    std::cout << "Hello Sean! Welcome to the app.\n";

    std::cout << "Are you currently tired? type 1 for yes, or 0 for no ";
    std::cin >> state; // stores input to state var

    std::cout << "\nhow many square feet must you paint? ";
    std::cin >> squareFeet;

    // LRC You don't really need the check variable...using break is simpler
    //while (check == 0) {
    while (true) {

        // LRC use a comment to explain what 1 means here
        if (state == 1) {
            time = (squareFeet / 200);
            // LRC
            //check = 1;
            break;

        // LRC use a comment to explain what 0 means here
        }
        else if (state == 0) {
            time = (squareFeet / 400);
            // LRC
            //check = 1;
            break;

        }
        else {
            std::cout << "Please enter either 1 if tired, and 0 if not.";
            std::cin >> state;
        }
    }

    std::cout << "You will be done in " << std::setprecision(3) << time
        << " hours";
}