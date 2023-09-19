//
//  main.cpp
//  assignment 1
//
// A Student
//
#include <string>
#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    //make user input their name
    std:: string name;
    cout << "what is your name?:\n";
    cin >> name;
    cout << "hello " << name << "\n";
    cout << "\n";

    // ask if they are tired
    std:: string response;
    cout << "are you tired from painting? (y/n)?: \n";
    cin >> response;
    if (response == "y")
        cout << "take a break!\n";
    else if (response == "n")
        cout << "well keep on truckin!\n";
    cout << "\n";
    
    // ask how many square feet they have to do
    
    cout << "how many square feet are you painting today?: \n";
    int sqft;
    cin >> sqft;
    // calculate how much they have to paint with regards to if theyre tired or not
    
    cout << "lets figure out how long this is going to take you!\n";
    double tired_total_hours = (sqft / 100.0) * 0.5;
    double total_hours = (sqft / 100.0)  * 0.25;
    cout << "\n";
    
    if (response == "y")
        cout << fixed << "its going to take a while, only about " << setprecision(1) << tired_total_hours << " hours to go!\n";
    else if (response == "n")
        cout << fixed << "not much longer! Only about " << setprecision(1) << total_hours << " hours til' youre done!\n";

    return 0;
}
