#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	string lastName, grade; // variables for last name and grade
	int score; // variable for score

	// Input
	cout << "Enter your last name: "; // prompt the user for last name
	cin >> lastName; // stores the last name

	cout << "Enter your score: "; // prompt the user for score
	cin >> score; // stores the score

	// Process
	if (score >= 90) { // if score is 90 or above, grade is A
		grade = 'A';
	}
	else if (score >= 80) { // if score is 80 or above, grade is B
		grade = 'B';
	}
	else if (score >= 70) { // if score is 70 or above, grade is C
		grade = 'C';
	}
	else if (score >= 60) { // if score is 60 or above, grade is D
		grade = 'D';
	}
	else { // if score is anything else, grade is F
		grade = 'F';
	}

	// Output
	cout << "Student: " << lastName << ", Grade: " << grade << endl; // displays the last name and grade

	return 0;

}