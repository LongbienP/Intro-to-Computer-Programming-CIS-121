#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	double purchasePrice, currentPrice, percentageChange; // variables to hold prices and percentage change

	// Input
	cout << "Enter the purchase price of the stock: "; // prompt user for purchase price
	cin >> purchasePrice; // stores purchase price

	cout << "Enter the current price of the stock: "; // prompt user for current price
	cin >> currentPrice; // stores current price

	// Process
	percentageChange = ((currentPrice - purchasePrice) / purchasePrice) * 100; // calculates percentage change

	// Output
	cout << "The percentage change of the stock is: " << percentageChange << "%" << endl; // displays percentage change

	return 0;

}