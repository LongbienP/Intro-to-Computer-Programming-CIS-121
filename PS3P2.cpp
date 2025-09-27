#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	string stockName; // variable to hold the name of the stock
	int stockQuantity; // variable to hold the quantity of stock
	double stockPrice, stockValue; // variables to hold stock information

	// Input
	cout << "Enter the stock name: "; // prompts the user to enter the stock name
	cin >> stockName; // stores the stock name from the user

	cout << "Enter the stock price: "; // prompts the user to enter the stock price
	cin >> stockPrice; // stores the stock price from the user

	cout << "Enter the stock quantity: "; // prompts the user to enter the stock quantity
	cin >> stockQuantity; // stores the stock quantity from the user

	// Process
	stockValue = stockPrice * stockQuantity; // calculates the current value of the stock

	// Output
	cout << "The current value of " << stockQuantity << " shares of " << stockName << " at $" << stockPrice << " per share is $" << stockValue << endl; // displays the current value of the stock in the portfolio

	return 0;

}