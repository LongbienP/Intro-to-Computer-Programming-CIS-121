#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

class ComputerAsset {
public:
    string make; // variable to hold computer make
    string model; // variable to hold computer model
    string cpu; // variable to hold computer cpu
    string ram; // variable to hold computer ram
    string hardDrive; // variable to hold computer hard drive
    string type; // variable to hold computer type
    double cost; // variable to hold computer cost

    void calculateCost() { // makes function to calculate cost
        cost = 0.0; // starts cost at 0

        if (make == "Lenovo") { // if make is Lenovo
            cost = cost + 1200.00; // adds 1200
        }
        else if (make == "HP") { // if make is HP
            cost = cost + 1000.00; // adds 1000
        }
        else if (make == "Apple") { // if make is Apple
            cost = cost + 2000.00; // adds 2000
        }

        if (cpu == "Intel") { // if cpu is Intel
            cost = cost + 200.00; // adds 200
        }

        if (ram == "16GB") { // if ram is 16GB
            cost = cost + 300.00; // adds 300
        }
        else if (ram == "32GB") { // if ram is 32GB
            cost = cost + 500.00; // adds 500
        }

        if (hardDrive == "SSD") { // if hard drive is SSD
            cost = cost + 500.00; // adds 500
        }

        if (type == "Laptop") { // if type is Laptop
            cost = cost + 300.00; // adds 300
        }
        else if (type == "Tablet") { // if type is Tablet
            cost = cost - 200.00; // subtracts 200
        }
    }
};

string make, model, cpu, ram, hardDrive, type; // variables to hold input data

int main() {

    ComputerAsset computer; // creates computer object

    // Input
    cout << "Enter computer make (press ctrl + z to stop): "; // prompts user for make
    cin >> make; // stores the make

    // Process
    while (!cin.eof()) { // while loop until ctrl + z pressed

        computer.make = make; // sets computer make

        cout << "Enter computer model: "; // prompts user for model
        cin >> model; // stores the model
        computer.model = model; // sets computer model

        cout << "Enter computer cpu: "; // prompts user for cpu
        cin >> cpu; // stores the cpu
        computer.cpu = cpu; // sets computer cpu

        cout << "Enter computer ram: "; // prompts user for ram
        cin >> ram; // stores the ram
        computer.ram = ram; // sets computer ram

        cout << "Enter computer hard drive: "; // prompts user for hard drive
        cin >> hardDrive; // stores the hard drive
        computer.hardDrive = hardDrive; // sets computer hard drive

        cout << "Enter computer type: "; // prompts user for type
        cin >> type; // stores the type
        computer.type = type; // sets computer type

        computer.calculateCost(); // calculates computer cost

        // Output
        cout << "Computer Make: " << computer.make << endl; // displays make
        cout << "Computer Model: " << computer.model << endl; // displays model
        cout << "Computer CPU: " << computer.cpu << endl; // displays cpu
        cout << "Computer RAM: " << computer.ram << endl; // displays ram
        cout << "Computer Hard Drive: " << computer.hardDrive << endl; // displays hard drive
        cout << "Computer Type: " << computer.type << endl; // displays type
        cout << "Computer Cost: $" << computer.cost << endl; // displays cost

        cout << endl; // blank line for neatness

        cout << "Enter computer make (press ctrl + z to stop): "; // prompts user for next make
        cin >> make; // stores the make
    }

    return 0;

}