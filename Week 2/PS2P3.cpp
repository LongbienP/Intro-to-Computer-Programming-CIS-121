#include <iostream> // only for cin, cout, endl
#include <string> // only for strings

using namespace std;

int main() {

	double length, width, area, circumference; // all in double to allow for decimal inputs

	cout << "Enter the length of the rectangle: "; // prompt user for length
	cin >> length; // stores length from user

	cout << "Enter the width of the rectangle: "; // prompt user for width
	cin >> width; // stores width from user

	area = length * width; // calculates area
	circumference = 2 * length + 2 * width; // calculates area and circumference

	cout << "The area of the rectangle is: " << area << endl; // outputs area
	cout << "The circumference of the rectangle is: " << circumference << endl; // outputs circumference

	return 0;

}