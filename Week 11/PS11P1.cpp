#include <iostream> // only for cin, cout, endl
#include <fstream> // only for file input
#include <string> // only for strings

using namespace std;

void calculateAutoData(double msrp, double salesPrice, double& savings, double& salesTax) { // makes function that calculates savings and sales tax using reference to call at any time
    savings = msrp - salesPrice; // calculates savings (MSRP minus sales price)
    salesTax = salesPrice * 0.07; // calculates sales tax (sales price times 7%)
}

string make, model; // variables to hold make and model
double msrp, salesPrice, savings, salesTax; // variables to hold MSRP, sales price, savings and sales tax
double totalSavings = 0.0; // variable to hold total savings

int main() {

    // Input
    ifstream infile; // creates file input object
    infile.open("auto.txt"); // opens auto.txt file for reading

    // Process
    while (!infile.eof()) { // while loop to process multiple autos until end of file

        infile >> make >> model >> msrp >> salesPrice; // reads line from file

        calculateAutoData(msrp, salesPrice, savings, salesTax); // uses the function to calculate savings and sales tax

        totalSavings += savings; // adds savings to totalSavings

        // Output
        cout << "Make: " << make << endl; // displays make
        cout << "Model: " << model << endl; // displays model
        cout << "MSRP: $" << msrp << endl; // displays MSRP
        cout << "Sales Price: $" << salesPrice << endl; // displays sales price
        cout << "Savings: $" << savings << endl; // displays savings
        cout << "Sales Tax: $" << salesTax << endl; // displays sales tax

        cout << endl; // blank line for neatness
    }

    infile.close(); // closes the file

    // Output
    cout << "Total Savings: $" << totalSavings << endl; // displays total savings

    return 0;

}