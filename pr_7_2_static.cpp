// Write a C++ program to show the use of static data member and static member function.

#include <iostream>
using namespace std;

class MyClass {
  private:
    int x;
    static int count; // static data member
  public:
    void setX(int num) {
        x = num;
        count++; // increment count when x is set
    }
    void showX() {
        cout << "x = " << x << endl;
    }
    static void showCount() { // static member function to show count
        cout << "Total objects created: " << count << endl;
    }
};

int MyClass::count = 0; // initialize static data member to zero

int main() {
  MyClass obj1, obj2, obj3;
  obj1.setX(10);
  obj2.setX(20);
  obj3.setX(30);

  obj1.showX();
  obj2.showX();
  obj3.showX();

  MyClass::showCount(); // call static member function to show count

  return 0;
}
