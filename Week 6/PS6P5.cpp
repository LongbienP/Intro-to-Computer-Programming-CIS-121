#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	string jobCode; // variable to hold job code
	int hours; // variable to hold hours worked
	double rateOfPay, grossPay; // variables to hold rate of pay and gross pay

	// Input
	cout << "Enter job code (L, J, A): "; // prompt the user for their job code
	cin >> jobCode; // stores the job code

	cout << "Enter hours worked: "; // prompt the user for hours worked
	cin >> hours; // stores the hours worked

	// Process
	if (jobCode == "L") { // if job code is L, set rate of pay to $50.00
			rateOfPay = 50.00;
	}
	else if (jobCode == "J") { // if job code is J, set rate of pay to $100.00
			rateOfPay = 100.00;
	}
	else if (jobCode == "A") { // if job code is A, set rate of pay to $25.00
			rateOfPay = 25.00;
	}
	else {
		cout << "Invalid job code." << endl; // otherwise, display error message
		return 1; // Exit with error
	}

	grossPay = hours * rateOfPay; // calculates the gross pay

	// Output
	cout << "Gross Salary: $" << grossPay << endl; // displays the gross pay

	return 0;

}