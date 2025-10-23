#include <iostream> // only for cin, cout, endl
#include <string> // only for strings   

using namespace std;

double calculateBattingAverage(int hits, int atBats) { // makes function that returns batting average based on hits and at bats to call at any time
    return hits * 1.0 / atBats; // calculates batting average by dividing hits by at bats 
}

int main() {

    string lastName; // variable to hold last name
    int hits, atBats; // variables to hold hits and at bats
    double battingAverage; // variable to hold batting average
    int playerCount = 0; // variable to hold player count

    // Input
    cout << "Enter last name (press ctrl + z to stop): "; // prompts user for last name
    cin >> lastName; // stores the last name

    // Process
    while (!cin.eof()) { // while loop to process multiple players until ctrl + z is pressed

        cout << "Enter number of hits: "; // prompts user for number of hits
        cin >> hits; // stores the hits

        cout << "Enter number of at bats: "; // prompts user for number of at bats
        cin >> atBats; // stores the at bats

        battingAverage = calculateBattingAverage(hits, atBats); // uses the function to calculate batting average

        playerCount = playerCount + 1; // adds 1 count to playerCount

        // Output
        cout << "Last Name: " << lastName << endl; // Displays last name
        cout << "Batting Average: " << battingAverage << endl; // Displays batting average

        cout << endl; // blank line for neatness

        cout << "Enter last name (press ctrl + z to stop): "; // prompts user for next last name
        cin >> lastName; // stores the last name
    }

    cout << "Number of Players: " << playerCount << endl; // Displays number of players

    return 0;

}