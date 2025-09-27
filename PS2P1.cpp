#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	int quantity; // number of items
	double unit_price, extended_price; // price per item, total price

	cout << "Enter the quantity: "; // prompts the user to enter the number of items 
	cin >> quantity; // stores the number of items

	cout << "Enter the unit price: "; // prompts the user to enter the price per item
	cin >> unit_price; // stores the price per item

	extended_price = quantity * unit_price; // computes the total price
	cout << "The extended price is: " << extended_price << endl; // displays the total price  

	return 0; 

}