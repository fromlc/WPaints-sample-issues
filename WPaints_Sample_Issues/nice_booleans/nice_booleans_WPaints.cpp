// A Student

#include <iostream>
using namespace std;

int main() {
    cout << "Hello, dear friend W!" << endl;

    // I wrote the line of code below to see if W is tired or not and I used numbers to simplify running the code
    cout << "Are you tired? Type '1' for 'yes' or '0' for 'no': ";
    int tiredInput;
    cin >> tiredInput;

    // I figured out how to use a Boolean variable online in order to have two different values yes and no
    bool tired = (tiredInput == 1);

    // This is where the user can put in how many square feet they need painted
    cout << "How many square feet to paint? Enter a number: ";
    int squareFeet;
    cin >> squareFeet;

    // I was having troubles with the speed part of this code so my friend helped me but this is labeling that if they are tired they only paint 200 square feet where as if they aren't tired they can paint 400 square feet an hour
    int speed = (tired) ? 200 : 400;
    int hours = squareFeet / speed;

    // this displays how long it will take based off the information the user puts in
    cout << "Painting " << squareFeet << " square feet will take you " << hours << " hours." << endl;

    return 0;
}