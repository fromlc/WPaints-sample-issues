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

    if (tired == 'y' || tired == 'Y')
        paint = 200;
    else if (tired == 'n' || tired == 'N')
        paint = 400;
    else
        cout << "Wrong input!\n";

    hours = area / paint;

    cout << "It will take W " << fixed << std::setprecision(1) << hours << " hours to paint " << paint << " square feet!\n";
   

}

