// This program will calculate how many hours it will take W to paint a certain area in square feet
// Given if they are tired or not
// A Student

#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
	cout << "Greetings W!\n"; // Greeting

	cout << "Are you tired? (Y/N)\n" << endl; // Question of being tired

	char choice;

	cin >> choice;

	choice = toupper(choice);

	if (choice == 'Y') // Answer yes
	{
		cout << "You are tired\n" << endl; // Displays "You are tired"
	}
	else if (choice == 'N') // Answer no
    {
		cout << "You are not tired\n" << endl; // Displays "You are not tired"
	}

	cout << "What is the square feet of surface you are going to paint? (enter an integer)\n" << endl; // Question of area being painted

	int area;

	cin >> area;

	cout << "Entered area is: " << area << " square feet\n" << endl; // Shows the area that W needs to paint 

	if (choice == 'Y') // If W is tired, then the area is divided by 200 
	{
		float time;

		time = area / (float)(200);

		cout << fixed << setprecision(1) << "It will take " << time << " hours(s) to paint " << area << " square feet of space\n" << endl;
		// Shows how many hours it will take W to paint given that they are tired
	}

	else if (choice == 'N') // If W is not tired, then the area is divided by 400
	{
		float time;

		time = area / (float)(400);

		cout << fixed << setprecision(1) << "It will take " << time << " hour(s) to paint " << area << " square feet of space\n" << endl;
		// Shows how many hours it will take W to paint given that they are not tired
	}

	return 0;
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
