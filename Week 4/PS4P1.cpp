#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	double itemQuantity, unitPrice, extendedPrice, tax, total; // variables for item quantity, unit price, extended price, tax and total

	// Input
	cout << "Enter the quantity of the item: "; // prompt user for item quantity
	cin >> itemQuantity; // stores item quantity

	// Process
	if (itemQuantity >= 1000) {			// if item quantity is greater than or equal to 1000, set unit price to 3.00
		unitPrice = 3.00; 
	}
	else {					// if item quantity is anything else than greater than or equal to 1000, set unit price to 5.00
		unitPrice = 5.00;
	}

	extendedPrice = itemQuantity * unitPrice; // calculates extended price
	tax = extendedPrice * 0.07; // calculates tax
	total = extendedPrice + tax; // calculates total

	// Output
	cout << "Quantity: " << itemQuantity << endl; // displays quantity
	cout << "Unit Price: $" << unitPrice << endl; // displays unit price
	cout << "Extended Price: $" << extendedPrice << endl; // displays extended price
	cout << "Tax: $" << tax << endl; // displays tax
	cout << "Total: $" << total << endl; // displays total

	return 0;

}