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

        while (true) 
        { // Loop until either 'y' or 'n' is entered 
            cout << "\n" << name << ", are you tired right now? (y/n): ";
            cin >> input;

            if (input == 'y') 
            {
                paintingSpeed = 20.0; // 20 square feet per 0.1 hours
                break;
            }
            else if (input == 'n') 
            {
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
    }

    return 0;
}
