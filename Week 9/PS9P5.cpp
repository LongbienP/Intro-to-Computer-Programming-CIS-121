#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

double getCostPerCredit(char districtCode) { // makes function that returns cost per credit based on district code to call at any time
    double costPerCredit; // variable to hold cost per credit

    if (districtCode == 'I') { // if district code is I, set cost per credit to $250
        costPerCredit = 250.0;
    }
    else if (districtCode == 'O') { // if district code is O, set cost per credit to $550
        costPerCredit = 550.0;
    }

    return costPerCredit; // returns the cost per credit
}

double computeTuitionCost(double creditHours, double costPerCredit) { // makes function that returns tuition cost based on credit hours and cost per credit to call at any time
    double tuitionCost; // variable to hold tuition cost

    tuitionCost = creditHours * costPerCredit; // calculate tuition cost (credit hours times cost per credit)

    return tuitionCost; // returns the calculated tuition cost
}

string lastName; // variable to hold last name
char districtCode; // variable to hold district code
double creditHours, costPerCredit, tuitionCost; // variable to hold credit hours, cost per credit, and tuition cost
double totalTuitionCost = 0.0; // variable to hold total tuition cost
int studentCount = 0; // variable to hold student count

int main() {

    // Input
    cout << "Enter last name (press ctrl + z to stop): "; // prompts user for last name
    cin >> lastName; // stores the last name

    // Process
    while (!cin.eof()) { // while loop to process multiple students until ctrl + z is pressed

        cout << "Enter credit hours: "; // prompts user for credit hours
        cin >> creditHours; // stores the credit hours

        cout << "Enter district code (I or O): "; // prompts user for district code
        cin >> districtCode; // stores the district code

        costPerCredit = getCostPerCredit(districtCode); // uses the function to get cost per credit
        tuitionCost = computeTuitionCost(creditHours, costPerCredit); // uses the function to calculate tuition cost

        totalTuitionCost += tuitionCost; // adds tuition cost to totalTuitionCost
        studentCount = studentCount + 1; // adds 1 count to studentCount

        // Output
        cout << "Last Name: " << lastName << endl; // displays last name
        cout << "Tuition Cost: $" << tuitionCost << endl; // displays tuition cost

        cout << endl; // blank line for neatness

        cout << "Enter last name (press ctrl + z to stop): "; // prompts user for next last name
        cin >> lastName; // stores the last name
    }

    cout << "Total Tuition Cost: $" << totalTuitionCost << endl; // displays total tuition cost

    return 0;

}