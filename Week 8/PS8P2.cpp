#include <iostream>
#include <string>

using namespace std;

// Process
double calculatePay(char jobCode, double hoursWorked) { // makes function that returns pay based on job code and hours to call at any time
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

    double pay; // variable to hold pay

    if (hoursWorked > 40) { // if hours worked is more than 40, calculate overtime pay
        double overtimeHours = hoursWorked - 40; // calculate overtime hours
        pay = (40 * payRate) + (overtimeHours * payRate * 1.5); // regular pay plus time and half for overtime
    }
    else { // if hours worked is 40 or less, calculate regular pay
        pay = hoursWorked * payRate; // regular pay calculation
    }

    return pay; // returns the calculated pay
}

int main() {

    string lastName; // variable to hold last name
    char jobCode; // variable to hold job code
    double hoursWorked, pay, averagePay; // variable to hold hours worked and pay
    double totalPay = 0.0; // variable to hold total pay
    int entryCount = 0; // variable to hold entry count

    // Input
    cout << "Enter last name (press ctrl + z to stop): "; // prompts user for last name
    cin >> lastName; // stores the last name

    // Process
    while (!cin.eof()) { // while loop to process multiple employees until ctrl + z is pressed

        cout << "Enter job code (L, A, or J): "; // prompts user for job code
        cin >> jobCode; // stores the job code

        cout << "Enter hours worked: "; // prompts user for hours worked
        cin >> hoursWorked; // stores the hours worked

        pay = calculatePay(jobCode, hoursWorked); // uses the function to calculate pay

        totalPay += pay; // adds pay to totalPay
        entryCount = entryCount + 1; // adds 1 count to entryCount

        cout << "Last Name: " << lastName << endl; // Displays last name
        cout << "Pay: $" << pay << endl; // Displays pay

        cout << endl; // blank line for neatness

        cout << "Enter last name (press ctrl + z to stop): "; // prompts user for next last name
        cin >> lastName; // stores the last name
    }

    averagePay = totalPay / entryCount; // calculates average pay
    

    // Output
    cout << "Total Pay: $" << totalPay << endl; // Displays total pay
    cout << "Number of Entries: " << entryCount << endl; // Displays number of entries
    cout << "Average Pay: $" << averagePay << endl; // Displays average pay

    return 0;

}