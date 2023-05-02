// Create a 'DISTANCE' class with : - feet and inches as data members 
// -	member function to input distance
// -	member function to output distance
// -	member function to add two distance objects
// Write a main function to create objects of DISTANCE class. Input two distances and output the sum.

#include <iostream>
using namespace std;

class DISTANCE {
private:
    int feet;
    int inches;

public:
    void inputDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void outputDistance() {
        cout << feet << " feet and " << inches << " inches." << endl;
    }

    DISTANCE addDistance(DISTANCE d) {
        DISTANCE total;
        total.inches = inches + d.inches;
        total.feet = feet + d.feet + total.inches / 12;
        total.inches %= 12;
        return total;
    }
};

int main() {
    DISTANCE d1, d2, d3;
    cout << "Enter distance 1:" << endl;
    d1.inputDistance();
    cout << "Enter distance 2:" << endl;
    d2.inputDistance();
    d3 = d1.addDistance(d2);
    cout << "Total distance is: ";
    d3.outputDistance();
    return 0;
}

