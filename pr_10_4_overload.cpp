// Write a C++ program to demonstrate use of constructor overloading.
#include <iostream>
using namespace std;

class Rectangle {
  private:
    int width, height;

  public:
    Rectangle() {
        width = 0;
        height = 0;
    }

    Rectangle(int w) {
        width = w;
        height = 0;
    }

    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    int area() {
        return width * height;
    }
};

int main() {
    Rectangle r1, r2(5), r3(3, 4);

    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
    cout << "Area of r3: " << r3.area() << endl;

    return 0;
}
