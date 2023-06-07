//iii.	Write a program for multiple inheritance.

#include <iostream>
using namespace std;

// Base class 1
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

// Base class 2
class Color {
protected:
    string color;

public:
    void setColor(string c) {
        color = c;
    }
};

// Derived class from Shape and Color
class Rectangle : public Shape, public Color {
public:
    void display() {
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Color: " << color << endl;
    }
};

int main() {
    Rectangle rectangle;

    // Set the dimensions and color
    rectangle.setWidth(5);
    rectangle.setHeight(7);
    rectangle.setColor("Red");

    // Display the rectangle details
    rectangle.display();

    return 0;
}
