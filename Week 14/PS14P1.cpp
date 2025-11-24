#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

// Process
class Membership {
public:
    string firstName; // variable to hold first name
    string lastName; // variable to hold last name
    string membershipType; // variable to hold membership type
    int age; // variable to hold age
    double cost; // variable to hold membership cost

    void calculateCost() { // makes function to calculate membership cost
		if (membershipType == "Gold") { // if membership type is Gold, set cost to $1200
            cost = 1200.00;
        }
		else if (membershipType == "Silver") { // if membership type is Silver, set cost to $1000
            cost = 1000.00;
        }
		else { // if membership type is Bronze or anything else, set cost to $500
            cost = 500.00;
        }

		if (age > 50) { // if age is over 50 apply 10% discount
            cost = cost * 0.90;
        }
    }

    void displayInfo() { // makes function to display all member information
        cout << "First Name: " << firstName << endl; // displays first name
        cout << "Last Name: " << lastName << endl; // displays last name
        cout << "Age: " << age << endl; // displays age
        cout << "Membership Type: " << membershipType << endl; // displays membership type
        cout << "Membership Cost: $" << cost << endl; // displays membership cost
        cout << endl; // blank line for neatness
    }
};

string firstName, lastName, membershipType; // variables to hold first name, last name and membership type
int age; // variable to hold age

int main() {

    Membership member; // creates membership object

    // Set default values
    member.firstName = "Enter first name"; // sets default first name
    member.lastName = "Enter last name"; // sets default last name
    member.age = 18; // sets default age to 18
    member.membershipType = "Bronze"; // sets default membership type

    // Input
    cout << "Enter first name (press ctrl + z to stop): "; // prompts user for first name
    cin >> firstName; // stores the first name

    // Process
    while (!cin.eof()) { // while loop to process multiple members until ctrl + z is pressed

        member.firstName = firstName; // sets first name

        cout << "Enter last name: "; // prompts user for last name
        cin >> lastName; // stores the last name
        member.lastName = lastName; // sets last name

        cout << "Enter age: "; // prompts user for age
        cin >> age; // stores the age
        member.age = age; // sets age

        cout << "Enter membership type (Gold, Silver, Bronze): "; // prompts user for membership type
        cin >> membershipType; // stores the membership type
        member.membershipType = membershipType; // sets membership type

        member.calculateCost(); // uses function to calculate cost

        member.displayInfo(); // uses function to display member information

        cout << "Enter first name (press ctrl + z to stop): "; // prompts user for next first name
        cin >> firstName; // stores the first name
    }

    return 0;

}