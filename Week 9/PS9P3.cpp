#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

double calculateMilesPerGallon(double miles, double gallons) { // functions to divide miles by gallons to get milesPerGallon
    return miles / gallons;
}

double calculateGasCost(double gallons) { // function that multiplies gallons by 3.50 to get the cost for gallons
    return gallons * 3.50;
}

string city; // variable to hold city
double miles, gallons, milesPerGallon, cost; // variable to hold miles, gallons, milesPerGallon, and cost
double totalCost = 0.0; // variable to set totalCost to 0
int tripCount = 0; // variable to set totalCost to 0

int main() {

    // Input
    cout << "Enter city (press ctrl + z to stop): "; // prompts user for destination city
    cin >> city; // stores the destination city

    // Process
    while (!cin.eof()) { // while loop to process multiple trips until ctrl + z is pressed

        cout << "Enter miles travelled: "; // prompts user for miles travelled
        cin >> miles; // stores the miles travelled

        cout << "Enter gallons used: "; // prompts user for gallons used
        cin >> gallons; // stores the gallons used

        milesPerGallon = calculateMilesPerGallon(miles, gallons); // uses the function to calculate miles per gallon
        cost = calculateGasCost(gallons); // uses the function to calculate gas cost

        totalCost += cost; // adds cost to totalCost
        tripCount = tripCount + 1; // adds 1 count to tripCount

        // Output
        cout << "City: " << city << endl; // Displays destination city
        cout << "Miles Per Gallon: " << milesPerGallon << endl; // Displays miles per gallon
        cout << "Gas Cost: $" << cost << endl; // Displays gas cost

        cout << endl; // blank line for neatness

        cout << "Enter next city (press ctrl + z to stop): "; // prompts user for next city
        cin >> city; // stores the destination city
    }

    cout << "Total Gas Cost: $" << totalCost << endl; // Displays total gas cost

    return 0;
}