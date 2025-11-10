#include <iostream> // only for cin, cout, endl
#include <fstream> // only for file input
#include <string> // only for strings

using namespace std;

// Process
void readEmployeeData(string firstNames[], string lastNames[], double salaries[]) { // makes function that reads employee data into arrays to call at any time
    ifstream infile; // creates file input object
    infile.open("Empldata.txt"); // opens Empldata.txt file for reading

    for (int i = 0; i < 10; i++) { // for loop to read 10 employees
        infile >> firstNames[i] >> lastNames[i] >> salaries[i]; // reads first name, last name and salary from file
    }

    infile.close(); // closes the file
}

// Process
void displayEmployees(string firstNames[], string lastNames[], double salaries[]) { // makes function that displays employee arrays to call at any time
    for (int i = 0; i < 10; i++) { // for loop to display 10 employees
        cout << "First Name: " << firstNames[i] << endl; // displays first name
        cout << "Last Name: " << lastNames[i] << endl; // displays last name
        cout << "Salary: $" << salaries[i] << endl; // displays salary
        cout << endl; // blank line for neatness
    }
}

// Process
void searchEmployee(string firstNames[], string lastNames[], double salaries[], string searchName) { // makes function that searches for employee by last name to call at any time
    bool found = false; // variable to hold found status

    for (int i = 0; i < 10; i++) { // for loop to search through employees
        if (lastNames[i] == searchName) { // if last name matches
            cout << "First Name: " << firstNames[i] << endl; // displays first name
            cout << "Last Name: " << lastNames[i] << endl; // displays last name
            cout << "Salary: $" << salaries[i] << endl; // displays salary
            found = true; // sets found to true
        }
    }

    if (found == false) { // if employee not found, return "not found"
        cout << searchName << " not found" << endl;
    }
}

string firstNames[10], lastNames[10]; // arrays to hold 10 first names and last names
double salaries[10]; // array to hold 10 salaries
string searchLastName; // variable to hold search last name

int main() {

    readEmployeeData(firstNames, lastNames, salaries); // uses the function to read employee data

    displayEmployees(firstNames, lastNames, salaries); // uses the function to display employees

    // Input
    cout << "Enter last name (press ctrl + z to stop) : "; // prompts user for last name
    cin >> searchLastName; // stores the last name

    // Process
    while (!cin.eof()) { // while loop to process multiple searches until ctrl + z is pressed

        searchEmployee(firstNames, lastNames, salaries, searchLastName); // uses the function to search for employee

        cout << endl; // blank line for neatness

        cout << "Enter last name (press ctrl + z to stop) : "; // prompts user for next last name
        cin >> searchLastName; // stores the last name
    }

    return 0;

}