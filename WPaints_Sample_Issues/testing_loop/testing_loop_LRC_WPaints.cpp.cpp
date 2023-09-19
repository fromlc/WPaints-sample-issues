// A Student
// Assignment 1: W Paints, Due 09/24/23
// 
// - Program that asks for the amount of square feet user wants to paint, and if they are tired or not.
// - Calculates how many hours it will take to finish painting.

#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() 
{
    while (true) // Loop for faster testing
    { 

        // Greetings 
        cout << "Hey, What's your name? ";
        string name;
        cin >> name;

        // Ask for status 
        char input;
        double paintingSpeed;

// LRC You can #define a symbol like _MYDEBUG and use it to
//      compile code for debugging only.
//      Try commenting out the #define and see what happens.
//      You'll see some code greyed out, this means it won't be compiled.
#define _MYDEBUG
//LRC Use #ifdef to prevent compilation of test code. 
//      The code between #ifdef and #endif will only compile if
//      when the symbol _MYDEBUG has been #defined.
#ifdef _MYDEBUG
        while (true)    // LRC testing loop
        { // Loop until either 'y' or 'n' is entered 
#endif
            cout << "\n" << name << ", are you tired right now? (y/n): ";
            cin >> input;

            if (input == 'y') 
            {
// LRC Simplify this to 200.0 square feet per 1 hour.
//      This avoids the multiplication by 0.1 below.
//      Multiplication is an expensive operation on a computer!
                paintingSpeed = 20.0; // 20 square feet per 0.1 hours
                break;
            }
            else if (input == 'n') 
            {
// LRC Simplify this to 400.0 square feet per 1 hour.
//      This avoids the multiplication by 0.1 below.
//      Multiplication is an expensive operation on a computer!
                paintingSpeed = 40.0; // 40 square feet per 0.1 hours
                break;
            }
            else 
            {
                cout << "Invalid input. " << endl;
            }
        }

        // Get amount of square feet
        cout << "\nHow many square feet of surface do you need to paint, " << name << "? ";
        double squareFeet;
        cin >> squareFeet;

        // Calc
        double time = (squareFeet / paintingSpeed) * 0.1; 

        // Output Results
        cout << "\nPainting " << fixed << setprecision(1) << squareFeet << " square feet will take you " << fixed << setprecision(1) << time << " hours.\n";

        // test again or quit
        char choice;
        cout << "\nPress 'r' to restart, or enter any other key to quit : ";
        cin >> choice;

        if (choice != 'r') 
        {
            break;
        }
// LRC Here you also need the #ifdef and #endif around the closing
//      curly brace for the testing loop.
#ifdef _MYDEBUG
    } // testing loop
#endif
    return 0;
}
