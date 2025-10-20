#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	string applianceName; //varaible for appliance name
	double applianceCost; // variable for appliance cost
	double warrantyCost; // variable for warranty cost
	double totalCost; // variable for total cost

	// Input
	cout << "Enter the name of the appliance: "; // prompt user for appliance name
	cin >> applianceName; // stores appliance name

	cout << "Enter the cost of the appliance: "; // prompt user for appliance cost
	cin >> applianceCost; // stores appliance cost

	// Process
	if (applianceCost > 1000) { // if appliance cost is greater than 1000, set warranty cost to 10% of appliance cost
		warrantyCost = applianceCost * 0.10;
	} 
	else { // if appliance cost is less than or equal to 1000, set warranty cost to 5% of appliance cost
		warrantyCost = applianceCost * 0.05;
	}
	totalCost = applianceCost + warrantyCost; // calculate total cost

	// Output
	cout << "Appliance Name: " << applianceName << endl; // display appliance name
	cout << "Appliance Cost: $" << applianceCost << endl; // display appliance cost
	cout << "Warranty Cost: $" << warrantyCost << endl; // display warranty cost
	cout << "Total Cost: $" << totalCost << endl; // display total cost

	return 0;

}