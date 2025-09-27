#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	double weight, rate, total;

	// Input
	cout << "Enter the weight of the metal in pounds: "; // prompt the user for weight of metal
	cin >> weight; // stores the weight of metal
	
	// Process
	if (weight > 100) { // if weight is greater than 100 pounds, set rate to 0.50
		rate = 0.50;
	}
	else if (weight >= 30 && weight <= 100) { // if weight is between 30 and 100 pounds, set rate to 0.25
		rate = 0.25;
	}
	else if (weight >= 20 && weight < 30) { // if weight is between 20 and 30 pounds, set rate to 0.20
		rate = 0.20;
	}
	else { // if weight is anything else, set rate to 0.10
		rate = 0.10;
	}

	total = weight * rate; // calculate total
	
	// Output
	cout << "Weight: " << weight << " pounds" << endl; // display weight
	cout << "Rate: $" << rate << " per pound" << endl; // display rate
	cout << "Total: $" << total << endl; // display total

	return 0;

}