#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

void calculateWidgetOrder(double widgets, double &costPerWidget, double &extendedPrice, double &salesTax, double &totalOrder) { // makes function that calculates cost per widget, extended price, sales tax and total order using reference to call at any time

    if (widgets >= 10000) { // if widgets is 10000 or more, set cost per widget to $4.00
        costPerWidget = 4.00;
    }
    else if (widgets >= 5000) { // if widgets is 5000 or more, set cost per widget to $5.00
        costPerWidget = 5.00;
    }
    else { // if widgets is less than 5000, set cost per widget to $10.00
        costPerWidget = 10.00;
    }

    extendedPrice = widgets * costPerWidget; // calculates extended price (widgets times cost per widget)
    salesTax = extendedPrice * 0.07; // calculates sales tax (7% of extended price)
    totalOrder = extendedPrice + salesTax; // calculates total order (extended price plus sales tax)
}

double widgets, costPerWidget, extendedPrice, salesTax, totalOrder; // variables to hold widgets, cost per widget, extended price, sales tax and total order
double overallTotalOrder = 0.0; // variable to hold overall total of all total orders
int entryCount = 0; // variable to hold entry count

int main() {

    // Input
    cout << "Enter number of widgets (press ctrl + z to stop): "; // prompts user for number of widgets
    cin >> widgets; // stores the number of widgets

    // Process
    while (!cin.eof()) { // while loop to process multiple entries until ctrl + z is pressed

        calculateWidgetOrder(widgets, costPerWidget, extendedPrice, salesTax, totalOrder); // uses the function to calculate cost per widget, extended price, sales tax and total order

        overallTotalOrder += totalOrder; // adds total order to overallTotalOrder
        entryCount = entryCount + 1; // adds 1 count to entryCount

        // Output
        cout << "Number of Widgets: " << widgets << endl; // displays number of widgets
        cout << "Cost Per Widget: $" << costPerWidget << endl; // displays cost per widget
        cout << "Extended Price: $" << extendedPrice << endl; // displays extended price
        cout << "Sales Tax: $" << salesTax << endl; // displays sales tax
        cout << "Total Order: $" << totalOrder << endl; // displays total order

        cout << endl; // blank line for neatness

        cout << "Enter number of widgets (press ctrl + z to stop): "; // prompts user for next number of widgets
        cin >> widgets; // stores the number of widgets
    }

    // Output
    cout << "verall Total of All Orders: $" << overallTotalOrder << endl; // displays overall total of all orders

    return 0;

}