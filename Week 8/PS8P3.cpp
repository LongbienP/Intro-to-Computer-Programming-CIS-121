#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

// Process
double calculateTuition(double creditsTaken) { // makes function that returns tuition based on credits taken to call at any time
    return creditsTaken * 250.0; // calculates tuition owed at $250 per credit
}

int main() {

    string lastName; // variable to hold last name
    double creditsTaken, tuition; // variable to hold credits taken and tuition
    double totalTuition = 0.0; // variable to hold total tuition
    int studentCount = 0; // variable to hold student count

    // Input
    cout << "Enter last name (press ctrl + z to stop): "; // prompts user for last name
    cin >> lastName; // stores the last name
    
    // Process
    while (!cin.eof()) { // while loop to process multiple students until ctrl + z is pressed

        cout << "Enter credits taken: "; // prompts user for credits taken
        cin >> creditsTaken; // stores the credits taken

        tuition = calculateTuition(creditsTaken); // uses the function to calculate tuition

        totalTuition += tuition; // adds tuition to totalTuition
        studentCount = studentCount + 1; // adds 1 count to studentCount

        cout << "Last Name: " << lastName << endl; // Displays last name
        cout << "Credits Taken: " << creditsTaken << endl; // Displays credits taken
        cout << "Tuition Owed: $" << tuition << endl; // Displays tuition owed

        cout << endl; // blank line for neatness

        cout << "Enter last name (press ctrl + z to stop): "; // prompts user for next last name
        cin >> lastName; // stores the last name
    }

    // Output
    cout << "Total Tuition: $" << totalTuition << endl; // Displays total tuition
    cout << "Number of Students: " << studentCount << endl; // Displays number of students

    return 0;


}
