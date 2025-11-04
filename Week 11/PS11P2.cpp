#include <iostream> // only for cin, cout, endl
#include <fstream> // only for file input
#include <string> // only for strings

using namespace std;

double calculateExtendedPrice(double quantity, double price) { // makes function that returns extended price based on quantity and price to call at any time
    double extendedPrice; // variable to hold extended price

    extendedPrice = quantity * price; // calculates extended price (quantity times price)

    return extendedPrice; // returns the calculated extended price
}

string item; // variable to hold item name
double quantity, price, extendedPrice, tax, receiptTotal; // variables to hold quantity, price, extended price, tax, and receiptTotal
double sumExtendedPrice = 0.0; // variable to hold sum of extended price

int main() {

    // Input
    ifstream infile; // creates file input object
    infile.open("grocery.txt"); // opens grocery.txt file for reading

    // Process
    while (!infile.eof()) { // while loop to process multiple items until end of file

        infile >> item >> quantity >> price; // reads item, quantity and price from file

        extendedPrice = calculateExtendedPrice(quantity, price); // uses the function to calculate extended price

        sumExtendedPrice += extendedPrice; // adds extended price to sumExtendedPrice

        cout << "Item: " << item << endl; // displays item
        cout << "Quantity: " << quantity << endl; // displays quantity
        cout << "Cost Per Item: $" << price << endl; // displays cost per item
        cout << "Extended Price: $" << extendedPrice << endl; // displays extended price

        cout << endl; // blank line for neatness
    }

    infile.close(); // closes the file

    tax = sumExtendedPrice * 0.07; // calculates tax (7% of sum extended price)
    receiptTotal = sumExtendedPrice + tax; // calculates total receipt (sum extended price plus tax)

    // Output
    cout << "Sum of Extended Price: $" << sumExtendedPrice << endl; // displays sum of extended price
    cout << "Tax: $" << tax << endl; // displays tax
    cout << "Receipt Total: $" << receiptTotal << endl; // displays total receipt

    return 0;

}