//--------------------------------------------------------------------------------------------------
// main.cpp
// File-Assignment #1 final
// A Student
// Assignment #1
// Due - 9/24/2023
//
// Description - This is a calculator that will ask W if he is tired or not, then take the amount of sqft W needs to paint for a job and will plug into one of the equations and display the amount of hours the job will take based on if he is tired or not
//--------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>

using namespace std;

//--------------------------------------------------------------------------------------------------
//Entry point
//--------------------------------------------------------------------------------------------------

int main()

    {
        char tired;
        int sqft;
        float timereq;
       
        // greets W and takes his input of y/n (yes/no)
        cout << "Hello, W!\n";
        
        cout << "Are you tired? [y/n]\n";
        
        cin >> tired;
        
        // asks for amount of sqft for job and allows for an input
        cout << "How many square feet do you want to paint?\n";
        
        cin >> sqft;
        
        // calculates the amount of hours it will take to paint the inputed sqft when not tired, then will display a message stating how many hours it will take to complete the job based off of the inputed amount of sqft
        if (tired == 'n' || tired == 'N')
        {
            timereq = sqft/400.0;
            cout << "Painting " << sqft << " sqft will take you " << setprecision(2) << (timereq) << " hours to complete the job.\n";
        }
        
        // calculates the amount of hours it will take to paint the inputed sqft when tired, then will display a message stating how many hours it will take to complete the job based off of the inputed amount of sqft
        else if (tired == 'y'|| tired == 'Y')
        {
            timereq = sqft/200.0;
            cout << "Painting " << sqft << " sqft will take you " << setprecision(2) << (timereq) << " hours to complete the job.\n";
        }
    
        // If input is not equal to y or n it will display an error and what values you need to input in order for it to work
        else if (tired != 'y' || tired != 'Y' || tired != 'n' || tired != 'N')
        {
            cout << "Wrong Input\n";
            cout << "Please input a y for yes or n for no\n";
        }

        return 0;
    }
