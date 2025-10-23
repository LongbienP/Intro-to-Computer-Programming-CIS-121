#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

// Process
double getUnitPrice(char productCode) { // makes function that returns unit price based on product code to call at any time
    double unitPrice; // variable to hold unit price

    if (productCode == 'W') { // if product code is W, set unit price to $10.00
        unitPrice = 10.00;
    }
    else if (productCode == 'C') { // if product code is C, set unit price to $15.00
        unitPrice = 15.00;
    }
    else if (productCode == 'G') { // if product code is G, set unit price to $20.00
        unitPrice = 20.00;
    }

    return unitPrice; // returns the unit price
}

double getShippingCost(char productCode) { // makes function that returns shipping cost based on product code to call at any time
    double shippingCost; // variable to hold shipping cost

    if (productCode == 'W') { // if product code is W, set shipping cost to $2.00
        shippingCost = 2.00;
    }
    else if (productCode == 'C') { // if product code is C, set shipping cost to $5.00
        shippingCost = 5.00;
    }
    else if (productCode == 'G') { // if product code is G, set shipping cost to $7.00
        shippingCost = 7.00;
    }

    return shippingCost; // returns the shipping cost
}

int main() {

    char productCode; // variable to hold product code
    int quantity; // variable to hold quantity
    double unitPrice, shipping, extendedPrice, total; // variables to hold unit price, shipping, extended price, and total
    double grandTotal = 0.0; // variable to hold grand total of all entries
    int entryCount = 0; // variable to hold entry count

    // Input
    cout << "Enter product code (W, C, or G) (press ctrl + z to stop): "; // prompts user for product code
    cin >> productCode; // stores the product code

    // Process
    while (!cin.eof()) { // while loop to process multiple customers until ctrl + z is pressed

        cout << "Enter quantity: "; // prompts user for quantity
        cin >> quantity; // stores the quantity

        unitPrice = getUnitPrice(productCode); // uses the function to get unit price
        shipping = getShippingCost(productCode); // uses the function to get shipping cost
        extendedPrice = quantity * unitPrice; // calculates extended price
        total = extendedPrice + shipping; // calculates total for order

        grandTotal += total; // adds total to grandTotal
        entryCount = entryCount + 1; // adds 1 count to entryCount

        cout << "Product Code: " << productCode << endl; // Displays product code
        cout << "Unit Price: $" << unitPrice << endl; // Displays unit price
        cout << "Shipping: $" << shipping << endl; // Displays shipping cost
        cout << "Extended Price: $" << extendedPrice << endl; // Displays extended price
        cout << "Total: $" << total << endl; // Displays total

        cout << endl; // blank line for neatness

        cout << "Enter product code (W, C, or G) (press ctrl + z to stop): "; // prompts user for next product code
        cin >> productCode; // stores the product code
    }

    // Output
    cout << "Grand Total of All Entries: $" << grandTotal << endl; // Displays grand total
    cout << "Number of Entries: " << entryCount << endl; // Displays number of entries

    return 0;


}
