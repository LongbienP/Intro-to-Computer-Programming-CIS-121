#include <iostream> // only for cin, cout, endl
#include <fstream> // only for file input
#include <string> // only for strings

using namespace std;

double calculateBiWeeklySalary(double annualSalary) { // makes function that returns bi-weekly salary based on annual salary to call at any time
    double biWeeklySalary; // variable to hold bi-weekly salary

    biWeeklySalary = annualSalary / 26; // calculates bi-weekly salary (annual salary divided by 26)

    return biWeeklySalary; // returns the calculated bi-weekly salary
}

string lastName; // variable to hold last name
double annualSalary, biWeeklySalary; // variables to hold annual salary and bi-weekly salary
double sumAnnualSalary = 0.0; // variable to hold sum of annual salary
int employeeCount = 0; // variable to hold employee count

int main() {

    ifstream infile; // creates file input object
    infile.open("empl.txt"); // opens empl.txt file for reading

    // Process
    while (!infile.eof()) { // while loop to process multiple employees until end of file

        infile >> lastName >> annualSalary; // reads last name and annual salary from file

        biWeeklySalary = calculateBiWeeklySalary(annualSalary); // uses the function to calculate bi-weekly salary

        sumAnnualSalary += annualSalary; // adds annual salary to sumAnnualSalary
        employeeCount = employeeCount + 1; // adds 1 count to employeeCount

        cout << "Last Name: " << lastName << endl; // displays last name
        cout << "Annual Salary: $" << annualSalary << endl; // displays annual salary
        cout << "Bi-Weekly Salary: $" << biWeeklySalary << endl; // displays bi-weekly salary

        cout << endl; // blank line for neatness
    }

    infile.close(); // closes the file

    double averageAnnualSalary = sumAnnualSalary / employeeCount; // calculates average annual salary

    // Output
    cout << "Sum of Annual Salary: $" << sumAnnualSalary << endl; // displays sum of annual salary
    cout << "Number of Employees: " << employeeCount << endl; // displays count of employees
    cout << "Average Annual Salary: $" << averageAnnualSalary << endl; // displays average annual salary

    return 0;

}