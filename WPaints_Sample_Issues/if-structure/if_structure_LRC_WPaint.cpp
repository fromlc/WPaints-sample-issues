// A Student
// Assignment 1: W Paints
// CS-181

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float paint{};
    float hours;
    
    cout << "Hello W!\n";

    cout << "---------------------------------------------------------------------------\n";

    cout << "Are you tired today? (y/n)\n";
    char tired;
    cin >> tired;

    cout << "---------------------------------------------------------------------------\n";

    cout << "How much square footage needs to be painted? (Enter an integer)\n";
    int area;
    cin >> area;

    cout << "---------------------------------------------------------------------------\n";

// LRC You need to prevent the calculation on bad input,
//      because variable paint has value 0.0 so you will divide by 0.
//      Dividing by zero will likely crash your program.
//
    //if (tired == 'y' || tired == 'Y')
    //    paint = 200;
    //else if (tired == 'n' || tired == 'N')
    //    paint = 400;
    //else
    //    cout << "Wrong input!\n";

    //hours = area / paint;

// LRC There are two ways to fix this:
//      1) initialize paint to 1.0 instead of 0.0, or
//      2) restructure your logic similar to below:
//

// LRC If user input matches none of these, we can't proceed
    if (tired != 'y' && tired != 'Y' && tired != 'n' && tired != 'N')
    {
        cout << "Wrong input!\n";
    }
// LRC Otherwise, it must be a yes or no response
    else
    {
        if (tired == 'y' || tired == 'Y')
            paint = 200;
        else if (tired == 'n' || tired == 'N')
            paint = 400;

        hours = area / paint;

        // LRC Continue long lines on another line, indented 4 spaces
        cout << "It will take W " << fixed << std::setprecision(1)
            << hours << " hours to paint " << paint << " square feet!\n";
    }
}

// LRC Zachary, does that long if condition convince you to use toupper()
//      or tolower()?
//
//  The code below is a simpler version of the if statment at Lines 49-66.
//  You can replace all those lines with this code:
//
    // Force user input to lower case
    //tired = tolower(tired);
    //
    // Does user input match any legal input?
    //if (tired != 'y' && tired != 'n')
    //{
    //    cout << "Wrong input!\n";
    //}
    // User input is good, determine whether it's yes or no
    //else
    //{
    //    if (tired == 'y')
    //        paint = 200;
    //    else if (tired == 'n')
    //        paint = 400;
    //
    //    hours = area / paint;
    // 
    //    cout << "It will take W " << fixed << std::setprecision(1)
    //        << hours << " hours to paint " << paint << " square feet!\n";
    //}

// LRC To try this code out, select it and type Ctrl+C to copy it.
// Then select Lines 49-66 and type Ctrl+V to replace your if statement.
// Keep the new code selected. The last step is to uncomment the code.
// 
// In VS you can uncomment selected code with Ctrl+K+U.
// 
// Let me know if you have any questions or problems regarding this code.
