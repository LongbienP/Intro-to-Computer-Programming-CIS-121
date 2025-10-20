#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	int n1, n2; // declares two integer variables to hold the first and second numbers

	cout << "Enter first number: "; // asks the user for their first number
	cin >> n1; // stores the first number in a variable

	cout << "Enter second number: "; // asks the user for their second number
	cin >> n2;  // stores the second number in a variable

	int sum = n1 + n2; // calculates the sum of the two numbers and stores it in a variable
	cout << "Your combined number is: " << sum << endl; // prints the sum of the two numbers

	return 0;
}