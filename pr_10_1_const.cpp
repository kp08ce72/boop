// Create a class called distance that has a separate integer member data for feet and inches. One constructor should initialize this data to zero and another should initialize it to fixed values. A member function should display it in feet inches format.

#include <iostream>
using namespace std;

class Distance {
    int feet;
    int inches;

public:
    Distance() {
        feet = 0;
        inches = 0;
    }

    Distance(int ft, int in) {
        feet = ft;
        inches = in;
    }

    void display() {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1;
    d1.display(); // Should output "Distance: 0 feet 0 inches"

    Distance d2(5, 11);
    d2.display(); // Should output "Distance: 5 feet 11 inches"

    return 0;
}

