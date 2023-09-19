// LRC Use one blank line to separate different ideas in your code.
// Each idea should start with a line comment.
// Here is how I'd like to see you use blank lines and line comments.
//

//
// This program will calculate how many hours it will take W to paint a certain area in square feet
// Given if they are tired or not
// A Student

#include <iostream>
#include <iomanip>

using namespace std;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main()
{
	// display app banner
	cout << "Greetings W!\n"; // Greeting

	// prompt for tired status
	cout << "Are you tired? (Y/N)\n" << endl; // Question of being tired
	char choice;
	cin >> choice;

	choice = toupper(choice);

// LRC This user interaction reassures the user and it's good for testing.
//		Notice that you can combine this if statement with the if
//		statement below, because they check for the same thing:
//
	float time;

	if (choice == 'Y') // Answer yes
	{
		cout << "You are tired\n" << endl; // Displays "You are tired"
		time = area / (float)(200);
	}
	else if (choice == 'N') // Answer no
    {
		cout << "You are not tired\n" << endl; // Displays "You are not tired"
		time = area / (float)(400);
	}

	// prompt for area in square feet
	cout << "What is the square feet of surface you are going to paint? (enter an integer)\n" << endl; // Question of area being painted
	int area;
	cin >> area;

	cout << "Entered area is: " << area << " square feet\n" << endl; // Shows the area that W needs to paint 

// LRC This cout statement can now be outside the if statement.
//		It belongs outside the if statement because you want to
//		display the result whether or not the user is tired.
// 
	// display result
	cout << fixed << setprecision(1) << "It will take " 
		<< time << " hours(s) to paint " 
		<< area << " square feet of space\n" << endl;

// LRC Because the if statements are combined, you don't need this code anymore.
// 
	//if (choice == 'Y') // If W is tired, then the area is divided by 200 
	//{
	//	float time;

	//	time = area / (float)(200);

	//	cout << fixed << setprecision(1) << "It will take " << time << " hours(s) to paint " << area << " square feet of space\n" << endl;
	//	// Shows how many hours it will take W to paint given that they are tired
	//}

	//else if (choice == 'N') // If W is not tired, then the area is divided by 400
	//{
	//	float time;

	//	time = area / (float)(400);

	//	cout << fixed << setprecision(1) << "It will take " << time << " hour(s) to paint " << area << " square feet of space\n" << endl;
	//	// Shows how many hours it will take W to paint given that they are not tired
	//}

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
