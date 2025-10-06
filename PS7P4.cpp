#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	string lastName, jobCode; // variables to hold last name and job code
	int hoursWorked; // variable to hold hours worked
	int employeeCount = 0; // variable to hold number of employees starting at 0
	double payRate, pay, averagePay; // variables to hold pay rate, pay, and average pay
	double totalPay = 0.0; // variable to hold total pay starting at $0

	// Input
	cout << "Enter last name (press ctrl + z to stop): "; // prompts user for last name
	cin >> lastName; // stores last name

	// Process
	while (!cin.eof()) { // while loop to process multiple employees until ctrl + z is pressed

		cout << "Enter job code (L, A, or J): "; // prompts user for job code
		cin >> jobCode; // stores job code

		cout << "Enter hours worked: "; // prompts user for hours worked
		cin >> hoursWorked; // stores hours worked

		if (jobCode == "L") { // if job code is L, set pay rate to $25 
			payRate = 25.00;
		}
		else if (jobCode == "A") { // if job code is A, set pay rate to $30
			payRate = 30.00;
		}
		else if (jobCode == "J") { // if job code is J, set pay rate to $50
			payRate = 50.00;
		}
		else { // if job code is invalid, display message below
			cout << "Invalid job code." << endl; 
			return -1; // error code
		}

		if (hoursWorked > 40) { // if hours worked is greater than 40, calculate overtime pay
			pay = (40 * payRate) + ((hoursWorked - 40) * payRate * 1.5); // calculates pay with overtime
		}
		else { // if hours worked is 40 or less, calculate regular pay
			pay = hoursWorked * payRate; // calculates regular pay
		}

		cout << "Last Name: " << lastName << endl; // displays last name
		cout << "Job Code: " << jobCode << endl; // displays job code
		cout << "Hours Worked: " << hoursWorked << endl; // displays hours worked
		cout << "Pay: $" << pay << endl; // displays pay

		cout << endl; // blank line to make it more neat

		totalPay = totalPay + pay; // adds pay to total pay
		employeeCount = employeeCount + 1; // increments employee count by 1

		cout << "Enter last name (press ctrl + z to stop): "; // prompts user for last name
		cin >> lastName; // stores last name
	}

	// Output
	cout << "Total pay for all employees: $" << totalPay << endl; // displays total pay
	cout << "Number of employees: " << employeeCount << endl; // displays number of employees
	cout << "Average pay: $" << averagePay << endl; // displays average pay

	return 0;

}