#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	string lastName; // variable for last name
	int numDependents; // variable for number of dependents
	double grossIncome, adjustedGrossIncome, incomeTax, taxRate; // variables for gross income, adjusted gross income, income tax, and tax rate

	// Input
	cout << "Enter last name: "; // prompt for last name
	cin >> lastName; // stores last name

	cout << "Enter number of dependents: "; // prompt for number of dependents
	cin >> numDependents; // stores number of dependents

	cout << "Enter gross income: "; // prompt for gross income
	cin >> grossIncome; // stores gross income

	// Process
	adjustedGrossIncome = grossIncome - (numDependents * 12000); // calculates adjusted gross income

	if (adjustedGrossIncome > 50000) { // if adjusted gross income is greater than 50000, set tax rate to 20%
		taxRate = 0.20; 
	} 
	else { // if adjusted gross income is 50000 or less, set tax rate to 10%
		taxRate = 0.10;
	}

	incomeTax = adjustedGrossIncome * taxRate; // calculates income tax
	
	if (incomeTax < 0) { // if income tax is less than 0, set income tax to 100
		incomeTax = 100;
	}
	// Output
	cout << "Last Name: " << lastName << endl; // displays last name
	cout << "Gross Income: $" << grossIncome << endl; // displays gross income
	cout << "Number of Dependents: " << numDependents << endl; // displays number of dependents
	cout << "Adjusted Gross Income: $" << adjustedGrossIncome << endl; // displays adjusted gross income
	cout << "Income Tax: $" << incomeTax << endl; // displays income tax

	return 0;

}