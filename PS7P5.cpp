#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	string lastName, districtCode; // variables to hold last name and district code
	int creditHours; // variable to hold credit hours
	int studentCount = 0; // variable to hold number of students starting at 0
	int totalCreditHours = 0; // variable to hold total credit hours starting at 0
	double tuitionRate, tuitionOwed; // variables to hold tuition rate and tuition owed
	double totalTuition = 0.0; // variable to hold total tuition starting at $0

	// Input
	cout << "Enter last name (press ctrl + z to stop): "; // prompts user for last name
	cin >> lastName; // stores last name

	// Process
	while (!cin.eof()) { // while loop to process multiple students until ctrl + z is pressed

		cout << "Enter credit hours: "; // prompts user for credit hours
		cin >> creditHours; // stores credit hours

		cout << "Enter district code (I or O): "; // prompts user for district code
		cin >> districtCode; // stores district code

		if (districtCode == "I") { // if district code is I, set tuition rate to $250
			tuitionRate = 250.00;
		}
		else if (districtCode == "O") { // if district code is O, set tuition rate to $550
			tuitionRate = 550.00;
		}
		else { // if district code is invalid, display message below
			cout << "Invalid district code." << endl;
			return -1; // error code
		}

		tuitionOwed = creditHours * tuitionRate; // calculates tuition owed

		cout << "Student: " << lastName << endl; // displays student last name
		cout << "Tuition Owed: $" << tuitionOwed << endl; // displays tuition owed

		cout << endl; // blank line to make it more neat

		totalTuition = totalTuition + tuitionOwed; // adds tuition to total tuition
		totalCreditHours = totalCreditHours + creditHours; // adds credit hours to total credit hours
		studentCount = studentCount + 1; // increases student count by 1

		cout << "Enter last name (press ctrl + z to stop): "; // prompts user for last name
		cin >> lastName; // stores last name
	}

	// Output
	cout << "Total tuition owed: $" << totalTuition << endl; // displays total tuition
	cout << "Total credit hours: " << totalCreditHours << endl; // displays total credit hours
	cout << "Number of students: " << studentCount << endl; // displays number of students

	return 0;

}