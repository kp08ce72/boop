// Write a C++ program to copy the value of one object to another object using copy constructor.
#include<iostream>
using namespace std;

class MyClass {
    private:
        int x, y;

    public:
        MyClass(int x1, int y1) {
            x = x1;
            y = y1;
        }

        MyClass(const MyClass &obj) {
            x = obj.x;
            y = obj.y;
        }

        void display() {
            cout << "x = " << x << ", y = " << y << endl;
        }
};

int main() {
    MyClass obj1(10, 20);
    MyClass obj2 = obj1; // Copy constructor called
    obj1.display();
    obj2.display();
    return 0;
}
