#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

double computeTuition(char districtCode, double creditHours) { // makes function that computes tuition owed to call at any time
    double costPerCredit; // variable to hold cost per credit

    if (districtCode == 'I') { // if district code is I, set cost per credit to $250
        costPerCredit = 250.0;
    }
    else { // if district code is not I, set cost per credit to $500
        costPerCredit = 500.0;
    }

    double tuitionOwed = creditHours * costPerCredit; // calculates tuition owed (credit hours times cost per credit)
    return tuitionOwed; // returns the calculated tuition owed
}

void displayStudent(string firstName, string lastName, char districtCode, double creditHours, double tuitionBalance) { // function that displays student data to call at any time
    cout << "First Name: " << firstName << endl; // displays first name
    cout << "Last Name: " << lastName << endl; // displays last name
    cout << "District Code: " << districtCode << endl; // displays district code
    cout << "Credit Hours: " << creditHours << endl; // displays credit hours
    cout << "Tuition Balance: $" << tuitionBalance << endl; // displays tuition balance
    cout << endl; // blank line for neatness
}

string firstName, lastName; // variables to hold first name and last name
char districtCode; // variable to hold district code
double creditHours, tuitionBalance; // variables to hold credit hours and tuition balance
int studentCount = 0; // variable to hold student count

int main() {

    // Input
    cout << "Enter first name (press ctrl + z to stop): "; // prompts user for first name
    cin >> firstName; // stores the first name

    // Process
    while (!cin.eof()) { // while loop to process multiple students until ctrl + z is pressed

        cout << "Enter last name: "; // prompts user for last name
        cin >> lastName; // stores the last name

        cout << "Enter district code (I or O): "; // prompts user for district code
        cin >> districtCode; // stores the district code

        cout << "Enter credit hours: "; // prompts user for credit hours
        cin >> creditHours; // stores the credit hours

        tuitionBalance = computeTuition(districtCode, creditHours); // uses function to compute tuition balance

        displayStudent(firstName, lastName, districtCode, creditHours, tuitionBalance); // uses function to display student

        studentCount = studentCount + 1; // adds 1 count to studentCount

        cout << "Enter first name (press ctrl + z to stop): "; // prompts user for next first name
        cin >> firstName; // stores the first name
    }

    // Output
    cout << "Number of students: " << studentCount << endl; // displays number of students

    return 0;

}