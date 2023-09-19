// CS_181_PROJ_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// greet friend -cout
	cout << "Hey W Glad to see you!\n";
	
	char choice;

	bool inputCheck = true;

	while (inputCheck == true)
	{
		// ask if tired -cout -cin
		cout << "Hey W are you tired today? (y/n)\n";

		cin >> choice;

		choice = toupper(choice);
		// choice = toupper(choice); was used instead of ex: (choice == 'y' || choice == 'Y') for REFERENCE.

		// make if else statement for tired or not
		if (choice == 'Y')
		{
			inputCheck = false;
		}
		else if (choice == 'N')
		{
			inputCheck = false;
		}
		else
		{
			cout << "wrong input!\n";
		}
	}

	int area;

	double answer;

	cout << "How many sq ft do you need to paint today? (insert number)\n";
	while (!(cin >> area))
	{
		cout << "Please insert a number: \n";
		cin.clear();
		cin.ignore(100, '\n');
	}

	// see notes for bool inputCheck
	// could not figure "bool" out for second part
	// bool inputCheck2 = true;

	// while (inputCheck2 == true)
	{
		// how many sq ft need to paint? -cout -cin
		//cout << "How many sq ft do you need to paint today? (insert number)\n";

		//cin >> area;

		if (choice == 'y' || choice == 'Y')
		{
			// if ((0 / area) == 0)
			
			{
				answer = (double)area / 200;

				cout << "You are going to need " << fixed << setprecision(1) << answer << " hours to paint " << area << " sq ft!\n";

				// inputCheck2 = false;
			}
		}
		else if (choice == 'n' || choice == 'N')
		{
			// if ((0 / area) == 0)
			
			{
				answer = (double)area / 400;

				cout << "You are going to need " << fixed << setprecision(1) << answer << " hours to paint " << area << " sq ft!\n";

				// inputCheck2 = false;
			}
		}
		// else
		{
			 // cout << "wrong input\n";
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
