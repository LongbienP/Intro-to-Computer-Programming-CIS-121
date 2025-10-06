#include <iostream>
#include <string>

using namespace std;

int main() {

	int quantity; // variable to hold quantity
	double price, extendedPrice, discountedPrice, discountAmount; // variables to hold price, extended price, discounted price, and discount amount
	double totalDiscountedPrices = 0.0; // variable to hold total of all discounted prices

	// Input
	cout << "Enter quantity (press ctrl + z to stop): "; // prompt the user to enter quantity
    cin >> quantity; // stores the quantity

	//Process
	while (!cin.eof()) { // while loop to process multiple entries until ctrl + z is pressed

		cout << "Enter price (press ctrl + z to stop): "; // prompt the user to enter price
		cin >> price; // stores the price

		extendedPrice = quantity * price; // calculates extended price
		discountAmount = 0.0; // sets initial discount amount to $0

		if (quantity > 1000) { // if quantity is greater than 1000, set discount amount to 15%
            discountAmount = extendedPrice * 0.1;
        }

		discountedPrice = extendedPrice - discountAmount; // calculates discounted price
		totalDiscountedPrices = totalDiscountedPrices + discountedPrice; // calculates total of all discounted prices

		// Output
		cout << "Quantity: " << quantity << endl; // Displays the quantity
		cout << "Price: $" << price << endl; // Displays the price
		cout << "Extended Price: $" << extendedPrice << endl; // Displays the extended price
		cout << "Discount Amount: $" << discountAmount << endl; // Displays the discount amount
		cout << "Discounted Price: $" << discountedPrice << endl; // Displays the discounted price
		cout << "Total $ Discounted Prices: $" << totalDiscountedPrices << endl; // Displays the total of all discounted prices
    }
    return 0;
}