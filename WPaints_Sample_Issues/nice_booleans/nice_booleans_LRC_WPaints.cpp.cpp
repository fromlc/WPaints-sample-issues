// A Student

#include <iostream>
using namespace std;

int main() {
    cout << "Hello, dear friend W!" << endl;

    // I wrote the line of code below to see if W is tired or not and I used numbers to simplify running the code
// LRC Number input is ok, but char input is easier on programmer and user alike
    //cout << "Are you tired? Type '1' for 'yes' or '0' for 'no': ";
    cout << "Are you tired (y/n)? ";
    //int tiredInput;
    char tiredInput;
    cin >> tiredInput;

    // I figured out how to use a Boolean variable online in order to have two different values yes and no
// LRC Nice touch! I like that you are comfortable with boolean expressions.
//      You don't need this boolean though...
    //bool tired = (tiredInput == 1);

    // This is where the user can put in how many square feet they need painted
    cout << "How many square feet to paint? Enter a number: ";
    int squareFeet;
    cin >> squareFeet;

    // I was having troubles with the speed part of this code so my friend helped me but this is labeling that if they are tired they only paint 200 square feet where as if they aren't tired they can paint 400 square feet an hour
// LRC It's ok to get help, as long as the code you submit is code you wrote.
//      Here you can replace the variable tired with the expression you used above: 
    //int speed = (tired) ? 200 : 400;
    int speed = (tiredInput == 'y') ? 200 : 400;
    int hours = squareFeet / speed;

// LRC No output formatting??
    // this displays how long it will take based off the information the user puts in
    cout << "Painting " << squareFeet << " square feet will take you " << hours << " hours." << endl;

    return 0;
}