#include <iostream>
#include <string>

using namespace std;

double calculateMilesPerGallon(double miles, double gallons) { // makes function that returns miles divided by gallons to call at any time
	return miles / gallons;
}

int main() {

	string destination; // variable to hold destination
	double miles, gallons, milesPerGallon; // variable to hold miles, gallons, and milesPerGallon
	double totalMiles = 0.0; // variable to hold total miles
	int tripCount = 0; // variable to hold trip count

	// Input
	cout << "Enter destination (press ctrl + z to stop): ";  // prompts user for destination
	cin >> destination; // stores the destination

	// Process
	while (!cin.eof()) { // while loop to process multiple trips until ctrl + z is pressed

		cout << "Enter amount of miles to destination: "; // prompts user for miles to destination
		cin >> miles; // stores the miles

		cout << "Enter amount of gallons used: "; // prompts user for amount of gallons used
		cin >> gallons; // stores the gallons

		milesPerGallon = calculateMilesPerGallon(miles, gallons); // uses the function to calculate milesPerGallon

		totalMiles += miles; // adds miles to totalMiles
		tripCount = tripCount + 1; // adds 1 count to tripCount

		cout << "Destination: " << destination << endl; // Displays destination
		cout << "Miles Travelled: " << miles << endl; // Displays miles travelled
		cout << "Gallons used: " << gallons << endl; // Displays gallons used
		cout << "Miles per Gallon: " << milesPerGallon << endl; // Displays miles per gallon

		cout << endl; // blank line for neatness

		cout << "Enter destination (press ctrl + z to stop): "; // Displays destination
		cin >> destination; // stores the destination
	}

	// Output
	cout << "Total Miles Traveled: " << totalMiles << endl; // Displays total miles
	cout << "Total Number of Trips: " << tripCount << endl; // Displays total number of trips

	return 0;

}