#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

double calculateTotal(double quantity, double price) { // makes function that returns total based on quantity and price to call at any time
    return quantity * price; // calculates total by multiplying quantity and price
}

double calculateDiscountTotal(double total) { // makes function that returns discount total based on total amount to call at any time
    double discountRate; // variable to hold discount rate

    if (total > 10000.00) { // if total is over $10,000, set discount rate to 10%
        discountRate = 0.10;
    }
    else { // if total is $10,000 or less, set discount rate to 5%
        discountRate = 0.05;
    }

    double discountAmount = total * discountRate; // variable to hold discountAmount and calculates discount amount
    double discountTotal = total - discountAmount; // variable to hold discountTotal and calculates discount total

    return discountTotal; // returns the calculated discount total
}

int main() {

    double quantity, price, total, discountTotal; // variables to hold quantity, price, total, and discount total
    double overallTotal = 0.0; // variable to hold grand total of all totals
    double overallDiscountTotal = 0.0; // variable to hold grand total of all discount totals
    int entryCount = 0; // variable to hold entry count
    
    // Input
    cout << "Enter quantity (press ctrl + z to stop): "; // prompts user for quantity
    cin >> quantity; // stores the quantity

    // Process
    while (!cin.eof()) { // while loop to process multiple entries until ctrl + z is pressed

        cout << "Enter price: "; // prompts user for price
        cin >> price; // stores the price

        total = calculateTotal(quantity, price); // uses the function to calculate total
        discountTotal = calculateDiscountTotal(total); // uses the function to calculate discount total

        grandTotal += total; // adds total to grandTotal
        grandDiscountTotal += discountTotal; // adds discount total to grandDiscountTotal
        entryCount = entryCount + 1; // adds 1 count to entryCount

        cout << "Total: $" << total << endl; // Displays total
        cout << "Discount Total: $" << discountTotal << endl; // Displays discount total

        cout << endl; // blank line for neatness

        cout << "Enter quantity (press ctrl + z to stop): "; // prompts user for next quantity
        cin >> quantity; // stores the quantity
    }

    // Output
    cout << "Overall Total: $" << overallTotal << endl; // Displays grand total
    cout << "Overall Discount Total: $" << overallDiscountTotal << endl; // Displays grand discount total
    cout << "Number of Entries: " << entryCount << endl; // Displays number of entries

    return 0;

}