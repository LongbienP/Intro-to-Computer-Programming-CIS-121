#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	string equipmentCode, dayCode; // variables to store equipment and day codes
	double cost; // variable to store rental cost

	// Input
	cout << "Enter equipment code (A, B, C): "; // prompt the user for equipment code
	cin >> equipmentCode; // stores equipment code
	 
	cout << "Enter day code (F for full day, H for half day): "; // prompt the user for day code
	cin >> dayCode; // stores day code

	// Process
	if (equipmentCode == "A") { // if equipment code is A proceed further
		if (dayCode == "F") { // if day code is F, set cost to $10.00
			cost = 10.00;
		}
		else if (dayCode == "H") { // if day code is H, set cost to $15.00
			cost = 15.00; 
		}
	}
	else if (equipmentCode == "B") { // if equipment code is B proceed further
		if (dayCode == "F") { // if day code is F, set cost to $20.00
			cost = 20.00;
		}
		else if (dayCode == "H") { // if day code is H, set cost to $35.00
			cost = 35.00;
		}
	}
	else if (equipmentCode == "C") { // if equipment code is C proceed further
		if (dayCode == "F") { // if day code is F, set cost to $45.00
			cost = 45.00;
		}
		else if (dayCode == "H") { // if day code is H, set cost to $40.00
			cost = 40.00;
		}
	}
	else { // otherwise, set cost to $50.00
		cost = 50.00;
	}

	// Output
	cout << "The rental cost is: $" << cost << endl; // display the rental cost

	return 0;

}