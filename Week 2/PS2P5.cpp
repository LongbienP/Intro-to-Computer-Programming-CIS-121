#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	double price, discountPercent, discountAmount, discountedPrice; // Variables to hold price, discount percent, discount amount, and discounted price

	cout << "Enter the price of the item: "; // Prompt user for price
	cin >> price; // stores price from user

	cout << "Enter the discount percent (in decimal form): "; // Prompt user for discount percent
	cin >> discountPercent; // stores discount percent from user

	discountAmount = price * discountPercent; // calculates discount amount
	discountedPrice = price - discountAmount; // calculates discounted price

	cout << "Discount Amount: $" << discountAmount << endl; // displays discount amount
	cout << "Discounted Price: $" << discountedPrice << endl; // displays discounted price

	return 0;

}