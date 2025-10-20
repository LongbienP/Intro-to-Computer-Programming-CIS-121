#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	string lastName, jobCode;
	double hoursWorked, payRate, totalPay;

	cout << "Enter employee last name: "; // prompt for last name
	cin >> lastName; // stores last name

	cout << "Enter hours worked: "; // prompt for hours worked
	cin >> hoursWorked; // stores hours worked

	cout << "Enter job code (E, J, A): "; // prompt for job code
	cin >> jobCode; // stores job code

	if (jobCode == "E") { // if job code is E, set pay rate to 25.00
		payRate = 25.00; 
	} 
	else if (jobCode == "J") { // if job code is J, set pay rate to 20.00
		payRate = 20.00;
	} 
	else if (jobCode == "A") { // if job code is A, set pay rate to 15.00
		payRate = 15.00;
	} 
	else { // if job code is anything else, print error message and exit
		cout << "Invalid job code." << endl; 
		return 1;
	}

	totalPay = hoursWorked * payRate; // calculate total pay

	cout << "Employee Last Name: " << lastName << endl; // display last name
	cout << "Hours Worked: " << hoursWorked << endl; // display hours worked
	cout << "Pay Rate: $" << payRate << endl; // display pay rate
	cout << "Total Pay: $" << totalPay << endl; // display total pay

	return 0;

}
