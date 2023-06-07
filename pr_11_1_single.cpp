//i.	Write a program for simple/single inheritance.
#include <iostream>
using namespace std;

// Base class
class Shape {
protected:
    int width;
    int height;

public:
    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    int getArea() {
        return width * height;
    }
};

int main() {
    Rectangle rectangle;

    // Set the dimensions
    rectangle.setWidth(5);
    rectangle.setHeight(7);

    // Calculate and display the area
    int area = rectangle.getArea();
    cout << "Area: " << area << endl;

    return 0;
}
