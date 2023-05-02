// to convert km to cm, meter, inch and feet using manipulators endl, setw, setfill and setprecision.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float km, cm, m, inch, feet;
    cout << "Enter distance in kilometers: ";
    cin >> km;

    // Convert km to cm, m, inch, and feet
    cm = km * 100000;
    m = km * 1000;
    inch = km * 39370.1;
    feet = km * 3280.84;

    // Print the converted values using manipulators
    cout << setfill('-') << setw(40) << "" << endl;
    cout << setfill(' ') << fixed << setprecision(2);
    cout << setw(15) << "Kilometers:" << setw(10) << km <<endl;
    cout << setw(15) << "Meters:" << setw(10) << m <<endl;
    cout << setw(15) << "Centimeters:" << setw(10) << cm <<endl;
    cout << setw(15) << "Inches:" << setw(10)<< inch <<endl;
    cout << setw(15) << "Feet:" << setw(10) << feet << endl;
    cout << setfill('-') << setw(40) << "" << endl;

    return 0;
}
