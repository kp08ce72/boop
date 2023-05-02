// C++ program to find area of circle using formula pi*r 2 . take the value of pi as default argument in function.
#include <iostream>
using namespace std;

double area(double radius, double pi = 3.14159) {
    return pi * radius * radius;
}

int main() {
    double radius, result;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Call the area function with default value of pi
    result = area(radius);

    // Output the result
    cout << "The area of the circle with radius " << radius << " is: " << result << endl;

    return 0;
}



