#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	double fixedCosts, pricePerUnit, costPerUnit, breakEvenPoint; // variables for fixed costs, price per unit, cost per unit, and the "break even point"

	// Input
	cout << "Enter fixed costs: "; // prompt user for fixed costs
	cin >> fixedCosts; // stores fixed costs

	cout << "Enter price per unit: "; // prompt user for price per unit
	cin >> pricePerUnit; // stores price per unit

	cout << "Enter cost per unit: "; // prompt user for cost per unit
	cin >> costPerUnit; // stores cost per unit

	// Process
	breakEvenPoint = fixedCosts / (pricePerUnit - costPerUnit); // formula for break even point

	// Output
	cout << "Break even point: " << breakEvenPoint << " units" << endl; // displays break even point

	return 0;

}