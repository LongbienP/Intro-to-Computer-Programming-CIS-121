#include <iostream> // only for cin, cout, endl
#include <fstream> // only for file input
#include <string> // only for strings

using namespace std;

void readCityData(string cities[], int populations[]) { // makes function that reads city data into arrays to call at any time
    ifstream infile; // creates file input object
    infile.open("cities.txt"); // opens cities.txt file for reading

    int count = 0; // variable to hold count
    while (!infile.eof()) { // while loop to read cities until end of file
        infile >> cities[count] >> populations[count]; // reads city and population from file
        count = count + 1; // adds 1 count to count
    }

    infile.close(); // closes the file
}

void displayCities(string cities[], int populations[]) { // makes function that displays city arrays to call at any time
    for (int i = 0; i < 8; i++) { // for loop to display 8 cities
        cout << "City: " << cities[i] << endl; // displays city
        cout << "Population: " << populations[i] << endl; // displays population
        cout << endl; // blank line for neatness
    }
}

string cities[8]; // array to hold 8 cities
int populations[8]; // array to hold 8 populations
string searchCity; // variable to hold search city
bool found; // variable to hold found status

int main() {

    readCityData(cities, populations); // uses the function to read city data

    displayCities(cities, populations); // uses the function to display cities

    // Input
    cout << "Enter city (press ctrl + z to stop) : "; // prompts user for city name
    cin >> searchCity; // stores the city name

    // Process
    while (!cin.eof()) { // while loop to process multiple searches until ctrl + z is pressed

        found = false; // sets found to false

        for (int i = 0; i < 8; i++) { // for loop to search for city
            if (cities[i] == searchCity) { // if city is found
                cout << cities[i] << " has a population of " << populations[i] << endl; // displays city and population
                found = true; // sets found to true
            }
        }

        if (found == false) { // if city not found
            cout << searchCity << " not found" << endl; // displays not found message
        }

        cout << endl; // blank line for neatness

        cout << "Enter city name (press ctrl + z to stop) : "; // prompts user for next city name
        cin >> searchCity; // stores the city name
    }

    return 0;

}