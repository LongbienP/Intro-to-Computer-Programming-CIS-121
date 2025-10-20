#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	int n1, n2, n3; // n1 = first integer, n2 = second integer, n3 = third integer

	cout << "Enter first integer: "; // prompt user for first integer
	cin >> n1; // stores first integer

	cout << "Enter second integer: "; // prompt user for second integer
	cin >> n2; // stores second integer

	cout << "Enter third integer: "; // prompt user for third integer
	cin >> n3; // stores the third integer

	double sum = (n1 + n2) * n3; // calculates the sum of the first two integers, then multiplies by the third integer

	cout << "Your first number plus your second number, times your 3rd number, is: " << sum << endl; // outputs the result

	return 0;
}