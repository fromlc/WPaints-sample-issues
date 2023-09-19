#include <iomanip>
#include <iostream>
int main() {

  double state;
  double squareFeet;
  double time;
  int check = 0;

  std::cout << "Hello Sean! Welcome to the app.\n";

  std::cout << "Are you currently tired? type 1 for yes, or 0 for no ";
  std::cin >> state; // stores input to state var

  std::cout << "\nhow many square feet must you paint? ";
  std::cin >> squareFeet;

  while (check == 0) {

    if (state == 1) {
      time = (squareFeet / 200);
      check = 1;
    } else if (state == 0) {
      time = (squareFeet / 400);
      check = 1;
    } else {
      std::cout << "Please enter either 1 if tired, and 0 if not.";
      std::cin >> state;
    }
  }

  std::cout << "You will be done in " << std::setprecision(3) << time
            << " hours";
}