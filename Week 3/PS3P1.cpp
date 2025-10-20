#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {


	double exam1, exam2, total;		// exam scores and total score

	// Input
	cout << "Enter score for exam 1 (worth 60%): "; // prompt user for exam 1 score
	cin >> exam1; // stores exam 1 score

	cout << "Enter score for exam 2 (worth 40%): "; // prompt user for exam 2 score
	cin >> exam2; // stores exam 2 score

	// Process
	total = (exam1 * 0.6) + (exam2 * 0.4); // calculate total score

	// Output
	cout << "Total score: " << total << endl; // display total score

	return 0;

}