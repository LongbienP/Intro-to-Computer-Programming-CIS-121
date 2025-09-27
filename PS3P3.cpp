#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	double mealCost, tip, totalWithTip; // variables for meal cost, tip, and total with tip

	// Input
	cout << "Enter the total cost of your meal: $"; // prompt user for meal cost
	cin >> mealCost; // store meal cost from user

	// Process
	tip = mealCost * 0.15; // calculate tip at 15%
	totalWithTip = mealCost + tip; // calculate total with tip

	// Output
	cout << "Meal Cost: $" << mealCost << endl; // display meal cost
	cout << "Tip (15%): $" << tip << endl; // display tip
	cout << "Total with Tip: $" << totalWithTip << endl; // display total with tip

	return 0;

}