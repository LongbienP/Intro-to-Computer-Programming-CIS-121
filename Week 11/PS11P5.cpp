#include <iostream> // only for cin, cout, endl
#include <fstream> // only for file input
#include <string> // only for strings

using namespace std;

void calculateStudentCosts(char studentCode, double creditsTaken, double& tuitionOwed, double& courseFees) { // makes function that calculates tuition owed and course fees using reference to call at any time
    double costPerCredit; // variable to hold cost per credit

    if (studentCode == 'I') { // if student code is I, set cost per credit to $250
        costPerCredit = 250.0;
    }
    else if (studentCode == 'O') { // if student code is O, set cost per credit to $500
        costPerCredit = 500.0;
    }

    tuitionOwed = creditsTaken * costPerCredit; // calculates tuition owed (credits taken times cost per credit)
    courseFees = tuitionOwed * 0.10; // calculates course fees (10% of tuition owed)
}

string lastName; // variable to hold last name
char studentCode; // variable to hold student code
double creditsTaken, tuitionOwed, courseFees; // variables to hold credits taken, tuition owed and course fees
double sumTuitionOwed = 0.0; // variable to hold sum of tuition owed
int studentCount = 0; // variable to hold student count

int main() {

    ifstream infile; // creates file input object
    infile.open("student.txt"); // opens student.txt file for reading

    // Process
    while (!infile.eof()) { // while loop to process multiple students until end of file

        infile >> lastName >> studentCode >> creditsTaken; // reads last name, student code and credits taken from file

        calculateStudentCosts(studentCode, creditsTaken, tuitionOwed, courseFees); // uses the function to calculate tuition owed and course fees

        sumTuitionOwed += tuitionOwed; // adds tuition owed to sumTuitionOwed
        studentCount = studentCount + 1; // adds 1 count to studentCount

        cout << "Last Name: " << lastName << endl; // displays last name
        cout << "Student Code: " << studentCode << endl; // displays student code
        cout << "Credits Taken: " << creditsTaken << endl; // displays credits taken
        cout << "Tuition Owed: $" << tuitionOwed << endl; // displays tuition owed
        cout << "Course Fees: $" << courseFees << endl; // displays course fees

        cout << endl; // blank line for neatness
    }

    infile.close(); // closes the file

    double averageTuition = sumTuitionOwed / studentCount; // calculates average tuition cost per student

    // Output
    cout << "Sum of Tuition Owed: $" << sumTuitionOwed << endl; // displays sum of tuition owed
    cout << "Number of Students: " << studentCount << endl; // displays number of students
    cout << "Average Tuition Cost: $" << averageTuition << endl; // displays average tuition cost per student

    return 0;

}