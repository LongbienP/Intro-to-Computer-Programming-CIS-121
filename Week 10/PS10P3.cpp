#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

void calculateTuition(double creditHours, double financialAid, double &tuition, double &tuitionOwed) { // makes function that calculates tuition and tuition owed using reference to call at any time
    tuition = creditHours * 250.0; // calculates tuition (credit hours times $250)
    tuitionOwed = tuition - financialAid; // calculates tuition owed (tuition minus financial aid)
}

string lastName; // variable to hold last name
double creditHours, financialAid, tuition, tuitionOwed; // variables to hold credit hours, financial aid, tuition and tuition owed
double totalTuitionOwed = 0.0; // variable to hold total tuition owed
int studentCount = 0; // variable to hold student count

int main() {

    // Input
    cout << "Enter last name (press ctrl + z to stop): "; // prompts user for last name
    cin >> lastName; // stores the last name

    // Process
    while (!cin.eof()) { // while loop to process multiple students until ctrl + z is pressed

        cout << "Enter credit hours: "; // prompts user for credit hours
        cin >> creditHours; // stores the credit hours

        cout << "Enter financial aid: "; // prompts user for financial aid
        cin >> financialAid; // stores the financial aid

        calculateTuition(creditHours, financialAid, tuition, tuitionOwed); // uses the function to calculate tuition and tuition owed

        totalTuitionOwed += tuitionOwed; // adds tuition owed to totalTuitionOwed
        studentCount = studentCount + 1; // adds 1 count to studentCount

        // Output
        cout << "Last Name: " << lastName << endl; // displays last name
        cout << "Tuition: $" << tuition << endl; // displays tuition
        cout << "Tuition Owed: $" << tuitionOwed << endl; // displays tuition owed

        cout << endl; // blank line for neatness

        cout << "Enter last name (press ctrl + z to stop): "; // prompts user for next last name
        cin >> lastName; // stores the last name
    }

    double averageOwed = totalTuitionOwed / studentCount; // calculates average amount owed

    // Output
    cout << "Total Tuition Owed: $" << totalTuitionOwed << endl; // displays total tuition owed
    cout << "Number of Entries: " << studentCount << endl; // displays count of entries
    cout << "Average Amount Owed: $" << averageOwed << endl; // displays average amount owed

    return 0;

}