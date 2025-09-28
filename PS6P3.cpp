#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {
	
	string locationCode; // variable to hold location code
	int numberOfTickets; // variable to hold number of tickets
	double pricePerTicket, totalCost; // variables to hold price per ticket and total cost

	// Input
	cout << "Enter number of concert tickets: "; // prompts the user for number of tickets
	cin >> numberOfTickets; // stores the number of tickets

	cout << "Enter location code (H or L): "; // prompts the user for location code
	cin >> locationCode; // stores the location code

	// Process
	if (numberOfTickets > 25 || locationCode == "H") { // if number of tickets is greater than 25 or location code is H,  set price per ticket to $30.00
		pricePerTicket = 30.00;
	}
	else if (numberOfTickets >= 10 && numberOfTickets <= 24 || locationCode == "L") { // if number of tickets is between 10 and 24 inclusive or location code is L, set price per ticket to $40.00
		pricePerTicket = 40.00;
	}
	else { // otherwise, set price per ticket to $50.00
		pricePerTicket = 50.00;
	}

	totalCost = numberOfTickets * pricePerTicket; // calculates the total cost

	// Output
	cout << "Number of tickets: " << numberOfTickets << endl; // displays number of tickets
	cout << "Price per ticket: $" << pricePerTicket << endl; // displays price per ticket
	cout << "Total cost: $" << totalCost << endl; // displays total cost

	return 0;

}