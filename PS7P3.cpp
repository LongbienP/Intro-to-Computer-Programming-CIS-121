#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	string city; // variable to hold city name
	int tripCount = 0; // variable to hold number of trips starting at 0 trips
	double miles, gallons, milesPerGallon; // variables to hold miles, gallons, and miles per gallon
	double totalMiles = 0.0; // variable to hold total miles starting at 0 miles

	// Input
	cout << "Enter city (press ctrl + z to stop): "; // prompts user for city name
	cin >> city; // stores city name

	// Process
	while (!cin.eof()) { // while loop to process multiple trips until ctrl + z is pressed

		cout << "Enter miles traveled: "; // prompts user for miles traveled
		cin >> miles; // stores miles traveled

		cout << "Enter gallons used: "; // prompts user for gallons used
		cin >> gallons; // stores gallons used

		if (gallons > 0) { // if gallons is greater than 0, calculate miles per gallon
			milesPerGallon = miles / gallons; // calculates miles per gallon

			cout << "City: " << city << endl; // displays destination city
			cout << "Miles per Gallon: " << milesPerGallon << endl; // displays miles per gallon

			cout << endl; // blank line to make it more neat

			totalMiles = totalMiles + miles; // adds miles to total miles
			tripCount = tripCount + 1; // increments trip count by 1
		}
		else { // if gallons is less than or equal to 0, display message below
			cout << " Invalid number of gallons." << endl;
			return -1; // error code
		}

		cout << "Enter city (press ctrl + z to stop): "; // prompts user for city name
		cin >> city; // stores city name
	}

	// Output
	cout << "Total miles travelled: " << totalMiles << endl; // displays total miles traveled
	cout << "Number of trips made: " << tripCount << endl; // displays number of trips made

	return 0;

}