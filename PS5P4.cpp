#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	double salary, taxRate, taxAmount;

	cout << "Enter your annual salary: "; // prompt user for annual salary 
	cin >> salary; // stores annual salary

	if (salary > 100000) { // if salary is greater than %100,000 ~ set tax rate to 40%
		taxRate = 0.40;
	}
	else if (salary >= 50000 && salary <= 100000) { // if salary is between %50,000 and %100,000 ~ set tax rate to 35%
		taxRate = 0.35;
	}
	else { // if salary is anything else, set tax rate to 25%
		taxRate = 0.25;
	}

	taxAmount = salary * taxRate;
	
	cout << "Salary: $" << salary << endl; // display salary, tax rate and tax amount
	cout << "Tax Rate: " << taxRate * 100 << "%" << endl; // display tax rate
	cout << "Tax Amount: $" << taxAmount << endl; // display tax amount

	return 0;

}