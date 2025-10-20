#include <iostream>
#include <string>

using namespace std;

int main() {

	string lastName; // variable to hold last name
	int hits, atBats; // variables to hold hits and at bats
	int playerCount = 0; // variable to count number of players
	double battingAverage; // variable to hold batting average

    // Input
	cout << "Enter last name (press ctrl + z to stop): "; // prompts the user for their last name
	cin >> lastName; // stores the last name

	// Process
	while (!cin.eof()) { // loops the program until the user presses ctrl + z
        
		cout << "Enter number of hits: "; // prompts the user for number of hits
		cin >> hits; // stores the number of hits

		cout << "Enter number of at bats: "; // prompts the user for number of at bats
		cin >> atBats; // stores the number of at bats

		if (atBats > 0) { // if atBats is greater than 0, calculate batting average
			battingAverage = hits * 1.0 / atBats; // calculates batting average

			cout << "Player: " << lastName << endl; // displays player's last name
			cout << "Batting Average: " << battingAverage << endl; // displays batting average

            cout << endl; // blank line to make it more neat
			playerCount = playerCount + 1; // player count increases by 1
        }
			else { // if atBats is less than or equal to 0 display message below
				cout << "Invalid number of at bats." << endl;
				return -1; // error message
		    }   

		cout << "Enter last name (press ctrl + z to stop): "; // prompts the user for their last name
		cin >> lastName; // stores the last name
    }

	// Output
	cout << "Number of players: " << playerCount << endl; // displays number of players

    return 0;
}