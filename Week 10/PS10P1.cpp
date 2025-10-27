#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

void calculateOrder(double quantity, double price, double &total, double &tax, double &totalOrder) { // makes function that calculates total, tax, and total order
    total = quantity * price; // calculates total
    tax = total * 0.07; // calculates tax
    totalOrder = total + tax; // calculates total order
}

double quantity, price, total, tax, totalOrder; // variables to hold quantity, price, total, tax and total order
double overallTotal = 0.0; // variable to hold overall total of all totals
double overallTax = 0.0; // variable to hold overall total of all taxes
double overallTotalOrder = 0.0; // variable to hold overall total of all total orders
int entryCount = 0; // variable to hold entry count

int main() {

    // Input
    cout << "Enter quantity (press ctrl + z to stop): "; // prompts user for quantity
    cin >> quantity; // stores the quantity

    // Process
    while (!cin.eof()) { // while loop to process multiple entries until ctrl + z is pressed

        cout << "Enter price: "; // prompts user for price
        cin >> price; // stores the price

        calculateOrder(quantity, price, total, tax, totalOrder); // uses the function to calculate total, tax and total order

        overallTotal += total; // adds total to overallTotal
        overallTax += tax; // adds tax to overallTax
        overallTotalOrder += totalOrder; // adds total order to overallTotalOrder
        entryCount = entryCount + 1; // adds 1 count to entryCount

        cout << "Total: $" << total << endl; // Displays total
        cout << "Tax: $" << tax << endl; // Displays tax
        cout << "Total Order: $" << totalOrder << endl; // Displays total order

        cout << endl; // blank line for neatness

        cout << "Enter quantity (press ctrl + z to stop): "; // prompts user for next quantity
        cin >> quantity; // stores the quantity
    }

    // Output
    cout << "Overall Total: $" << overallTotal << endl; // Displays overall total
    cout << "Overall Tax: $" << overallTax << endl; // Displays overall tax
    cout << "Overall Total Order: $" << overallTotalOrder << endl; // Displays overall total order

    return 0;

}