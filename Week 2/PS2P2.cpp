#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std; 

int main() {

	string lastName; // last name of employee
	double hours, payRate, grossPay; // hours worked, pay rate, gross pay
		
	cout << "Enter last name: "; // prompt for last name
	cin >> lastName; // stores last name

	cout << "Enter hours worked: "; // prompt for hours worked
	cin >> hours; // stores hours worked
	 
	cout << "Enter pay rate: "; // prompt for pay rate
	cin >> payRate; // stores pay rate

	grossPay = hours * payRate; // calculates gross pay

	cout << "Last name: " << lastName << endl; // outputs last name
	cout << "Gross pay: $" << grossPay << endl; // outputs gross pay

	return 0;
}