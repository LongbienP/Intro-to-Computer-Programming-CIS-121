#include <iostream> // only for cin, cout, endl
#include <fstream> // only for file input
#include <string> // only for strings

using namespace std;

void reverse() { // makes function that displays data in reverse order to call at any time
    ifstream infile; // creates file input object
    infile.open("students.txt"); // opens students.txt file for reading

    string firstName[10], lastName[10]; // variables to hold first names and last names
    double gpa[10]; // variable to hold gpa
    int studentCount = 0; // variable to hold student count

    // Process
    while (!infile.eof()) { // while loop to read students until end of file
        infile >> firstName[studentCount] >> lastName[studentCount] >> gpa[studentCount]; // reads first name, last name and gpa from file
        studentCount = studentCount + 1; // adds 1 count to studentCount
    }

    infile.close(); // closes the file

    for (int i = studentCount - 1; i >= 0; i--) { // for loop to display students in reverse order
        cout << "First Name: " << firstName[i] << endl; // displays first name
        cout << "Last Name: " << lastName[i] << endl; // displays last name
        cout << "GPA: " << gpa[i] << endl; // displays gpa
        cout << endl; // blank line for neatness
    }
}

string firstName, lastName; // variables to hold first name and last name
double gpa; // variable to hold gpa

int main() {

    ifstream infile; // creates file input object
    infile.open("students.txt"); // opens students.txt file for reading
    
    // Input
    cout << "Student order:" << endl; // displays order of students
    cout << endl; // blank line for neatness

    // Process
    while (!infile.eof()) { // while loop to process multiple students until end of file

        infile >> firstName >> lastName >> gpa; // reads first name, last name and gpa from file

        cout << "First Name: " << firstName << endl; // displays first name
        cout << "Last Name: " << lastName << endl; // displays last name
        cout << "GPA: " << gpa << endl; // displays gpa

        cout << endl; // blank line for neatness
    }

    infile.close(); // closes the file

    // Output
    cout << "Students in reverse order:" << endl; // displays students in reverse order
    cout << endl; // blank line for neatness
    reverse(); // uses the function to display in reverse order

    return 0;

}