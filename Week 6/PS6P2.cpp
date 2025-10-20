#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	int partNumber, quantity; // variables to hold part number and quantity
	double costPerUnit, totalCost; // variables to hold cost per unit and total cost

	// Input
	cout << "Enter a part number of the following(10, 99, 55, 70, 50)." << endl; // prompt the user for part number
	cin >> partNumber; // stores part number and quantity

	cout << "Enter the quantity." << endl; // prompt the user for quantity
	cin >> quantity; // stores quantity

	// Process
	if (partNumber == 10 && quantity > 1000) { // if part number is equal to 10 and quantity is greater than 1000, set cost per unit to $1.00
		costPerUnit = 1.00; 
	}
	else if (partNumber == 99 && quantity > 500) { // if part number is equal to 99 and quantity is greater than 500, set cost per unit to $2.00
		costPerUnit = 2.00;
	}
	else { // otherwise set cost per unit to $5.00
		costPerUnit = 5.00;
	}

	totalCost = costPerUnit * quantity; // calculates total cost

	// Output
	cout << "Part Number: " << partNumber << endl; // displays part number
	cout << "Cost Per Unit: $" << costPerUnit << endl; // displays cost per unit
	cout << "Total Cost: $" << totalCost << endl; // displays total cost

	return 0;

}