#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

class Employee {
public:
    Employee() { // constructor
        m_salary = 0.00; // sets salary to 0
    }

    void FirstName(string fn) { // sets first name
        m_fn = fn; // stores first name
    }

    string FirstName() { // gets first name
        return m_fn; // returns first name
    }

    void LastName(string ln) { // sets last name
        m_ln = ln; // stores last name
    }

    string LastName() { // gets last name
        return m_ln; // returns last name
    }

    void Salary(float s) { // sets salary
        m_salary = s; // stores salary
    }

    float Salary() { // gets salary
        return m_salary; // returns salary
    }

    float Bonus() { // calculates bonus
        if (m_salary > 100000.00) { // if salary over 100000
            return m_salary * 0.20; // returns 20% bonus
        }
        else { // if salary 100000 or less
            return m_salary * 0.10; // returns 10% bonus
        }
    }

    ~Employee() { // destructor
        cout << "Goodbye" << endl; // displays goodbye message
    }

protected:
    string m_fn, m_ln; // variables to hold first name and last name
    float m_salary; // variable to hold salary
};

class Manager : public Employee { // manager class inherits from employee
public:
    float Long_Term_Bonus() { // calculates long term bonus
        return m_salary * 0.50; // returns 50% of salary
    }

    float Bonus() { // overrides bonus method
        return m_salary * 0.50; // returns 50% of salary
    }
};

string firstName, lastName; // variables to hold first name and last name
float salary; // variable to hold salary

int main() {

    Manager manager; // creates manager object

    // Input
    cout << "Enter first name: "; // prompts user for first name
    cin >> firstName; // stores the first name
    manager.FirstName(firstName); // sets first name

    cout << "Enter last name: "; // prompts user for last name
    cin >> lastName; // stores the last name
    manager.LastName(lastName); // sets last name

    cout << "Enter salary: "; // prompts user for salary
    cin >> salary; // stores the salary
    manager.Salary(salary); // sets salary

    // Output
    cout << "First Name: " << manager.FirstName() << endl; // displays first name
    cout << "Last Name: " << manager.LastName() << endl; // displays last name
    cout << "Salary: $" << manager.Salary() << endl; // displays salary
    cout << "Bonus: $" << manager.Bonus() << endl; // displays bonus
    cout << "Long Term Bonus: $" << manager.Long_Term_Bonus() << endl; // displays long term bonus

    return 0;

}