#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

void calculatePackageCharges(double weight, int zipCode, double &postage, double &areaCharge, double &weightCharge) { // makes function that calculates postage, area charge and weight charge using reference to call at any time

    if (zipCode == 60171) { // if zip code is 60171, set area charge to $2
        areaCharge = 2.00;
    }
    else if (zipCode == 60172) { // if zip code is 60172, set area charge to $2.50
        areaCharge = 2.50;
    }
    else if (zipCode == 60635) { // if zip code is 60635, set area charge to $3
        areaCharge = 3.00;
    }
    else { // if zip code is any other, set area charge to $5
        areaCharge = 5.00;
    }

    double chargePerOunce; // variable to hold charge per ounce

    if (weight > 100) { // if weight is over 100, set charge per ounce to $0.02
        chargePerOunce = 0.02;
    }
    else if (weight > 50) { // if weight is over 50, set charge per ounce to $0.03
        chargePerOunce = 0.03;
    }
    else { // if weight is 50 or less, set charge per ounce to $0.05
        chargePerOunce = 0.05;
    }

    weightCharge = weight * chargePerOunce; // calculates weight charge (weight times charge per ounce)
    postage = areaCharge + weightCharge; // calculates postage (area charge plus weight charge)
}

double weight, postage, areaCharge, weightCharge; // variables to hold weight, postage, area charge and weight charge
int zipCode; // variable to hold zip code
int entryCount = 0; // variable to hold entry count

int main() {

    // Input
    cout << "Enter weight (press ctrl + z to stop): "; // prompts user for weight
    cin >> weight; // stores the weight

    // Process
    while (!cin.eof()) { // while loop to process multiple packages until ctrl + z is pressed

        cout << "Enter zip code: "; // prompts user for zip code
        cin >> zipCode; // stores the zip code

        calculatePackageCharges(weight, zipCode, postage, areaCharge, weightCharge); // uses the function to calculate postage, area charge and weight charge

        entryCount = entryCount + 1; // adds 1 count to entryCount

        // Output
        cout << "Area Charge: $" << areaCharge << endl; // Displays area charge
        cout << "Weight Charge: $" << weightCharge << endl; // Displays weight charge
        cout << "Postage: $" << postage << endl; // Displays postage

        cout << endl; // blank line for neatness

        cout << "Enter weight (press ctrl + z to stop): "; // prompts user for next weight
        cin >> weight; // stores the weight
    }

    // Output
    cout << "Number of Entries: " << entryCount << endl; // Displays number of entries

    return 0;

}