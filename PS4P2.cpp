#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	string item; // variable for item
	int itemQuantity; // variable for quantity of item
	double unitPrice, extendedPrice; // variable for unit price and extended price
	const string A = "A"; // constant for item A
	const string B = "B"; // constant for item B

	// Input
	cout << "Enter item A or B: "; // prompt user for item
	cin >> item; // stores item from user
	
	cout << "Enter quantity of item: "; // prompt user for quantity
	cin >> itemQuantity; // stores quantity from user

	// Process
	if (item == A) { // if item is A, set unit price is 10.00
		unitPrice = 10.00;
	}
	else if (item == B) { // if item is B, set unit price is 20.00
		unitPrice = 20.00;
	}
	else { // if item is not A or B, display error message and exit program
		cout << "Invalid Item. Please choose item A or item B. " << endl;
		return 1;
	}

	extendedPrice = itemQuantity * unitPrice; // calculate extended price

	//Output
	cout << "Item: " << item << endl; // display item
	cout << "Unit Price: $" << unitPrice << endl; // display unit price
	cout << "Extended Price: $" << extendedPrice << endl; // display extended price

	return 0;

}