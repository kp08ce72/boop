// Create a class 'COMPLEX' to hold a complex number. Write a friend function to add two complex numbers. Write a main function to add two COMPLEX objects.
#include <iostream>
using namespace std;

class COMPLEX {
    double real, imag;
public:
    void setValues(double r, double i) {
        real = r;
        imag = i;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
    friend COMPLEX add(COMPLEX c1, COMPLEX c2);
};

COMPLEX add(COMPLEX c1, COMPLEX c2) {
    COMPLEX c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}

int main() {
    COMPLEX c1, c2, c3;
    c1.setValues(2, 3);
    c2.setValues(4, 5);
    c3 = add(c1, c2);
    cout << "c1: ";
    c1.display();
    cout << "c2: ";
    c2.display();
    cout << "c1 + c2: ";
    c3.display();
    return 0;
}

