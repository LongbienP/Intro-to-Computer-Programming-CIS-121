#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

double getPayRate(char jobCode) { // makes function that returns pay rate based on job code to call at any time
    double payRate; // variable to hold pay rate

    if (jobCode == 'L') { // if job code is L, set pay rate to $25
        payRate = 25.0;
    }
    else if (jobCode == 'A') { // if job code is A, set pay rate to $30
        payRate = 30.0;
    }
    else if (jobCode == 'J') { // if job code is J, set pay rate to $50
        payRate = 50.0;
    }

    return payRate; // returns the pay rate
}

double calculateGrossPay(double hoursWorked, double payRate) { // makes function that returns gross pay based on hours and pay rate to call at any time
    double grossPay; // variable to hold gross pay

    if (hoursWorked > 40) { // if hours worked is more than 40, calculate overtime pay
        double overtimeHours = hoursWorked - 40; // calculate overtime hours
        grossPay = (40 * payRate) + (overtimeHours * payRate * 1.5); // regular pay plus time and half for overtime
    }
    else { // if hours worked is 40 or less, calculate regular pay
        grossPay = hoursWorked * payRate; // regular pay calculation
    }

    return grossPay; // returns the calculated gross pay
}

string lastName; // variable to hold last name
char jobCode; // variable to hold job code
double hoursWorked, payRate, grossPay, // variable to hold hours worked, pay rate, and gross pay
double totalGrossPay = 0.0; // variable to hold total gross pay
int employeeCount = 0; // variable to hold employee count

int main() {

    // Input
    cout << "Enter last name (press ctrl + z to stop): "; // prompts user for last name
    cin >> lastName; // stores the last name

    // Process
    while (!cin.eof()) { // while loop to process multiple employees until ctrl + z is pressed

        cout << "Enter job code (L, A, or J): "; // prompts user for job code
        cin >> jobCode; // stores the job code

        cout << "Enter hours worked: "; // prompts user for hours worked
        cin >> hoursWorked; // stores the hours worked

        payRate = getPayRate(jobCode); // uses the function to get pay rate
        grossPay = calculateGrossPay(hoursWorked, payRate); // uses the function to calculate gross pay

        totalGrossPay += grossPay; // adds gross pay to totalGrossPay
        employeeCount = employeeCount + 1; // adds 1 count to employeeCount

        // Output
        cout << "Last Name: " << lastName << endl; // Displays last name
        cout << "Gross Pay: $" << grossPay << endl; // Displays gross pay

        cout << endl; // blank line for neatness

        cout << "Enter last name (press ctrl + z to stop): "; // prompts user for next last name
        cin >> lastName; // stores the last name
    }

    cout << "Total Gross Pay: $" << totalGrossPay << endl; // Displays total gross pay

    return 0;

}