#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std; 

int main() { 

	string firstName; // string variable to hold the first name
	int score; // integer variable to hold the score

	cout << "Enter your first name: "; // prompt for first name
	cin >> firstName; // stores first name

	cout << "Enter your score: "; // prompt for score 
	cin >> score; // stores score

	cout << firstName << ", has a score of " << score << endl; // output first name and score

	return 0; 
}