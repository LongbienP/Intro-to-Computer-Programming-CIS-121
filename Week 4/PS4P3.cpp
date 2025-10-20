#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	int numBooks; // varaible to hold number of books
	double costPerBook, orderTotal, shippingCharge; // variables for cost per book, order total, and shipping charge

	// Input
	cout << "Enter the number of books to order: "; // prompt user for number of books
	cin >> numBooks; // stores number of books

	cout << "Enter the cost per book: $"; // prompt user for cost per book
	cin >> costPerBook; // stores cost per book

	// Process
	orderTotal = numBooks * costPerBook; // calculates order total

	if (orderTotal > 50.00) { // if order total is greater than $50, set shipping charge to $0
		shippingCharge = 0.00;
	} 
	else { // if order total is $50 or less, set shipping charge to $25
		shippingCharge = 25.00;
	}
	
	// Output
	cout << "Order Total: $" << orderTotal << endl; // displays order total
	cout << "Shipping Charge: $" << shippingCharge << endl; // displays shipping charge

	return 0;

}