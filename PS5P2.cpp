#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	double pounds, pricePerPound, totalPrice; 

	// Input
	cout << "Enter the quantity of apples in pounds: "; // prompts the user for quantity of apples in pounds
	cin >> pounds; // stores the quantity of apples in pounds
	
	// Process
	if (pounds > 100) { // if pounds is greater than 100, set pricePerPound to $0.10
		pricePerPound = 0.10;
	} 
	else if (pounds >= 50) { // if pounds is between 50 and 100, set pricePerPound to $0.25
		pricePerPound = 0.25;
	} 
	else {	// if pounds is anything else, set pricePerPound to $0.50
		pricePerPound = 0.50; 
	}

	totalPrice = pounds * pricePerPound; // calculates total price

	// Output
	cout << "Price per pound: $" << pricePerPound << endl; // displays price per pound
	cout << "Total price: $" << totalPrice << endl; // displays total price

	return 0;

}
