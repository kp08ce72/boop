// C++ program using static member function to increment value of variable 3 times.

#include <iostream>
using namespace std;

class MyClass {
  private:
    static int counter; // static data member
  public:
    static void increment() { // static member function to increment counter
        counter++;
    }
    static void display() { // static member function to display counter
        cout << "Counter = " << counter << endl;
    }
};

int MyClass::counter = 0; // initialize static data member to zero

int main() {
  MyClass::increment(); // call static member function to increment counter
  MyClass::increment();
  MyClass::increment();

  MyClass::display(); // call static member function to display counter

  return 0;
}
