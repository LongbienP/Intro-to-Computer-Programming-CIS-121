#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	int n1, n2; // variables to hold the two numbers

	cout << "Enter first number: "; // prompt user for first number
	cin >> n1; // stores the first number

	cout << "Enter second number: "; // prompt user for second number
	cin >> n2; // stores the second number

	int sum = n1 + n2; // calculates the sum of the two numbers
	int product = n1 * n2; // calculates the product of the two numbers
	int difference = n1 - n2; // calculates the difference of the two numbers

	cout << "The sum of the 2 numbers are: " << sum << endl; // outputs the sum of the two numbers
	cout << "The product of the 2 numbers are: " << product << endl; // outputs the product of the two numbers
	cout << "The difference of the 2 numbers are : " << difference << endl; // outputs the difference of the two numbers

	return 0;
}