// Write a C++ program to print message when object gets destroyed using destructor.
#include <iostream>
using namespace std;

class MyClass {
    static int count;
public:
    MyClass() {
        count++;
        cout << "Object created. Count = " << count << endl;
    }

    ~MyClass() {
        count--;
        cout << "Object destroyed. Count = " << count << endl;
    }
};

int MyClass::count = 0; // define and initialize static member outside the class

int main() {
    MyClass obj1;
    MyClass obj2;

    return 0;
}
