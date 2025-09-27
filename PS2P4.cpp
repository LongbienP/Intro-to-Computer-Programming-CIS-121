#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	string lastName; // last name of student
	int creditsTaken; // number of credits taken
	const int costPerCredit = 250; // cost per credit hour
	const int labFee = 100; // lab fee
	int totalTuition; // total tuition

	cout << "Enter last name: "; // prompt for last name
	cin >> lastName; // stores last name

	cout << "Enter credits taken: "; // prompt for credits taken
	cin >> creditsTaken; // stores credits taken

	totalTuition = (creditsTaken * costPerCredit) + labFee; // calculates total tuition

	cout << "Last Name: " << lastName << endl; // displays last name
	cout << "Total Tuition: $" << totalTuition << endl; // displays total tuition

	return 0;

}