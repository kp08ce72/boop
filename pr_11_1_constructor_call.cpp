//iv.	Write a C++ program to demonstrate constructor call in the derived class.

#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    int baseData;

public:
    Base(int data) : baseData(data) {
        cout << "Base constructor called." << endl;
    }
};

// Derived class
class Derived : public Base {
protected:
    int derivedData;

public:
    Derived(int baseData, int data) : Base(baseData), derivedData(data) {
        cout << "Derived constructor called." << endl;
    }

    void displayData() {
        cout << "Base Data: " << baseData << endl;
        cout << "Derived Data: " << derivedData << endl;
    }
};

int main() {
    Derived derived(5, 10);

    // Display the data
    derived.displayData();

    return 0;
}
