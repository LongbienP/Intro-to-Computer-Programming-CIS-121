#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

// Process
void calculateInvestment(double investment, double fiveYearRate, double tenYearRate, double &fiveYearAmount, double &tenYearAmount) { // makes function that calculates five year amount and ten year amount using reference to call at any time

    fiveYearAmount = investment; // start with original investment
    for (int year = 1; year <= 5; year++) { // loop for 5 years
        fiveYearAmount = fiveYearAmount * (1 + fiveYearRate); // multiply by (1 + rate) each year
    }

    tenYearAmount = investment; // start with original investment
    for (int year = 1; year <= 10; year++) { // loop for 10 years
        tenYearAmount = tenYearAmount * (1 + tenYearRate); // multiply by (1 + rate) each year
    }
}

double investment, fiveYearRate, tenYearRate, fiveYearAmount, tenYearAmount; // variables to hold investment, five year rate, ten year rate, five year amount and ten year amount

int main() {

    // Input
    cout << "Enter investment amount (press ctrl + z to stop): "; // prompts user for investment amount
    cin >> investment; // stores the investment amount

    // Process
    while (!cin.eof()) { // while loop to process multiple investments until ctrl + z is pressed

        cout << "Enter 5 year interest rate (as decimal): "; // prompts user for 5 year interest rate
        cin >> fiveYearRate; // stores the 5 year interest rate

        cout << "Enter 10 year interest rate (as decimal): "; // prompts user for 10 year interest rate
        cin >> tenYearRate; // stores the 10 year interest rate

        calculateInvestment(investment, fiveYearRate, tenYearRate, fiveYearAmount, tenYearAmount); // uses the function to calculate five year amount and ten year amount

        // Output
        cout << "Investment Amount: $" << investment << endl; // displays investment amount
        cout << "Five Year Amount: $" << fiveYearAmount << endl; // displays five year amount
        cout << "Ten Year Amount: $" << tenYearAmount << endl; // displays ten year amount

        cout << endl; // blank line for neatness

        cout << "Enter investment amount (press ctrl + z to stop): "; // prompts user for next investment amount
        cin >> investment; // stores the investment amount
    }

    return 0;

}