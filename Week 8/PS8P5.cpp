#include <iostream>
#include <string>

using namespace std;

// Process
double getLabFee(string department, int courseCode) { // makes function that returns lab fee based on department and course code to call at any time
    double labFee; // variable to hold lab fee

    if (department == "CIS" && courseCode == 101) { // if department is CIS and course code is 101, set lab fee to $50.00
        labFee = 50.00;
    }
    else if (department == "CIS" && courseCode == 121) { // if department is CIS and course code is 121, set lab fee to $100.00
        labFee = 100.00;
    }
    else if (department == "MAT" && courseCode == 111) { // if department is MAT and course code is 111, set lab fee to $25.00
        labFee = 25.00;
    }
    else if (department == "MAT" && courseCode == 112) { // if department is MAT and course code is 112, set lab fee to $35.00
        labFee = 35.00;
    }
    else if (department == "ENG" && courseCode == 100) { // if department is ENG and course code is 100, set lab fee to $55.00
        labFee = 55.00;
    }
    else { // for all other departments and course codes, set lab fee to $50.00
        labFee = 50.00;
    }

    return labFee; // returns the calculated lab fee
}

int main() {

    string department; // variable to hold department
    int courseCode; // variable to hold course code
    double labFee; // variable to hold lab fee
    double totalLabFees = 0.0; // variable to hold total lab fees
    int courseCount = 0; // variable to hold course count

    // Input
    cout << "Enter department (press ctrl + z to stop): "; // prompts user for department
    cin >> department; // stores the department

    // Process
    while (!cin.eof()) { // while loop to process multiple courses until ctrl + z is pressed

        cout << "Enter course code: "; // prompts user for course code
        cin >> courseCode; // stores the course code

        labFee = getLabFee(department, courseCode); // uses the function to calculate lab fee

        totalLabFees += labFee; // adds lab fee to totalLabFees
        courseCount = courseCount + 1; // adds 1 count to courseCount

        cout << "Department: " << department << endl; // Displays department
        cout << "Course Code: " << courseCode << endl; // Displays course code
        cout << "Lab Fee: $" << labFee << endl; // Displays lab fee

        cout << endl; // blank line for neatness

        cout << "Enter department (press ctrl + z to stop): "; // prompts user for next department
        cin >> department; // stores the department
    }

    double averageLabFee = totalLabFees / courseCount; // calculates average lab fee

    // Output
    cout << "Total Lab Fees: $" << totalLabFees << endl; // Displays total lab fees
    cout << "Number of Courses: " << courseCount << endl; // Displays number of courses
    cout << "Average Lab Fee: $" << averageLabFee << endl; // Displays average lab fee

    return 0;

}