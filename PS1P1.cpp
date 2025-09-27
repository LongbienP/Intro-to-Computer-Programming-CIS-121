#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std; 

int main() { 

	string firstName, lastName; // declares two string variables to hold the first and last names

	cout << "Enter your first name: "; // asks the user for their first name 
	cin >> firstName;	// stores the first name in a variable

	cout << "Enter your last name: "; // asks the user for their last name
	cin >> lastName; // stores the last name in a variable

	cout << "Hello " << lastName << endl; // prints the last name after saying Hello

	return 0;
}