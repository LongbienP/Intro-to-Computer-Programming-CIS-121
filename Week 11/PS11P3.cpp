#include <iostream> // only for cin, cout, endl
#include <fstream> // only for file input
#include <string> // only for strings

using namespace std;

double calculateMPG(double miles, double gallons) { // makes function that returns miles per gallon based on miles and gallons to call at any time
    double mpg; // variable to hold miles per gallon

    mpg = miles / gallons; // calculates miles per gallon (miles divided by gallons)

    return mpg; // returns the calculated miles per gallon
}

double gallons, miles, mpg; // variables to hold gallons, miles and miles per gallon
double sumGallons = 0.0; // variable to hold sum of gallons
double sumMiles = 0.0; // variable to hold sum of miles

int main() {

    ifstream infile; // creates file input object
    infile.open("trips.txt"); // opens trips.txt file for reading

    // Process
    while (!infile.eof()) { // while loop to process multiple trips until end of file

        infile >> gallons >> miles; // reads gallons and miles from file

        mpg = calculateMPG(miles, gallons); // uses the function to calculate miles per gallon

        sumGallons += gallons; // adds gallons to sumGallons
        sumMiles += miles; // adds miles to sumMiles

        cout << "Gallons: " << gallons << endl; // displays gallons
        cout << "Miles: " << miles << endl; // displays miles
        cout << "MPG: " << mpg << endl; // displays miles per gallon

        cout << endl; // blank line for neatness
    }

    infile.close(); // closes the file

    // Output
    cout << "Sum of Gallons: " << sumGallons << endl; // displays sum of gallons
    cout << "Sum of Miles: " << sumMiles << endl; // displays sum of miles

    return 0;

}