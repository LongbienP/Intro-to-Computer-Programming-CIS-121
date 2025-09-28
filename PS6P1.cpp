#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	int quantity; // variable to hold
	string status;
	double price, extendedPrice, tax, total;

	// Input
	cout << "Enter quantity of widgets: "; // prompt the user for quantity of widgets
	cin >> quantity; // stores the quantity of widgets

	cout << "Enter customer status (A, B, C, D): "; // prompt the user for customer status
	cin >> status; // stores the customer status

	// Process
	if (quantity > 10000 && status == "A") { // if quantity is greater than 10000 and status is A, set price to $10.00
		price = 10.0;
	}
	else if (quantity > 10000 && status == "B") { // if quantity is greater than 10000 and status is B, set price to $12.00
		price = 12.0;
	}
	else if (quantity >= 5000 && quantity <= 10000 && status == "C") { // if quantity is between 5000 and 10000 and status is C, set price to $20.00
		price = 20.0;
	}
	else if (quantity >= 5000 && quantity <= 10000 && status == "D") { // if quantity is between 5000 and 10000 and status is D, set price to $22.00
		price = 22.0;
	}
	else { // otherwise, set price to $30.00
		price = 30.0;
	}
	
	extendedPrice = quantity * price; // calculates the extended price
	tax = extendedPrice * 0.07; // calculates the tax at 7%
	total = extendedPrice + tax; // calculates the total

	// Output
	cout << "Extended Price: $" << extendedPrice << endl; // displays the extended price
	cout << "Tax: $" << tax << endl; // displays the tax amount
	cout << "Total: $" << total << endl; // displays the total

	return 0;
	
}