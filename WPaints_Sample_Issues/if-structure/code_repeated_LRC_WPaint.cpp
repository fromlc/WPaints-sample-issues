/*Assignment 1: this program takes input of if W is tired and how many square feet they need to paint.
it then outputs how many hours that will take. this is repeated until it is quit by the user.
*/
#include <iostream>

using namespace std;

int main()
{
    //creates and initilizes variables
    char tired = 't', choice = 'c';
    int SqFeet = 1;
    double hours = 1, hdecimal = 1;
    hours = 1;
    hdecimal = 1;

    // greets W
    cout << "\nHello W!\n";

    while (true)
    {
        //Asks W if tired and takes that in as tired variable
        cout << "\nAre you feeling tired today? (y/n/[q]uit)\n";
        cin >> tired;
// LRC Notice that you're forcing your user to type a lowercase response.
//      Use toupper() or tolower() to let the user type in either case.

// LRC Notice that you need the area whether the user is tired or not.
        // takes in square footage
        cout << "\nHow many square feet are you painting?\n";
        cin >> SqFeet;
    
        //separates into three possible answers
        if (tired == 'y')
        {
// LRC Notice that you need the area whether the user is tired or not.
//      This code belongs above the if statement.
// 
            //takes in sqaure footage
            //cout << "\nHow many square feet are you painting?\n";
            //cin >> SqFeet;

            //finds the hours to a single decimal point by using modulus division and some math.
            
// LRC It's quite a bit easier to format your output
//      when you display it!

            hours = SqFeet / 200;
            hdecimal = (SqFeet % 200) / 20;


// LRC You also display the hours whether the user is tired or not.

            //displays hours
            cout << "\n It will take you " << hours << "." << hdecimal << " hours to complete this project.";

// LRC This code also belongs outside the if statement.
            //asks to input more data
            cout << "\nWould you like to input more data? (y/n)\n";
            cin >> choice;

            //if yes then starts loop from the top
            if (choice == 'y')
                cout << "Okay!";

            //if no breaks loop and ends program
            else if (choice == 'n')
            {
                cout << "Okay, have a good day!\n";
                break;
            }
         
            //anything else displays an error to the user
            else
                cout << "\nInvalid letter try again!\n\n\n";


        }

        //the code from yes is repeated
        else if (tired == 'n')
        {

// LRC Notice that you need the area whether the user is tired or not.
            //takes in square footage
            //cout << "\nHow many square feet are you painting?\n";
            //cin >> SqFeet;

            //finds the hours to a single decimal point by using modulus division and some math. changed to 400 and 40.
            hours = SqFeet / 400;
            hdecimal = (SqFeet % 400) / 40;

            //displays hours
            cout << "\n It will take you " << hours << "." << hdecimal << " hours to complete this project.";
            
            //asks to input more data
            cout << "\nWould you like to input more data? (y/n)\n";
            cin >> choice;

            //if yes then starts loop from the top
            if (choice == 'y')
                cout << "Okay!";

            //if no breaks loop and ends program
            else if (choice == 'n')
            {
                cout << "Okay, have a good day!\n";
                break;
            }
            //anything else displays an error to the user
            else 
                cout << "\nInvalid letter try again!\n\n\n";

        }

        //if q is typed ends program 
        else if (tired == 'q')
        {
            cout << "\nGoodbye!\n";
            
            break;
        }

        //anything else displays an error to the user
        else
            cout << "\nInvalid letter try again!\n\n\n";

    }

}


