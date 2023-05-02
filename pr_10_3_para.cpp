// Write a C++ program to demonstrate use of parameterized constructor.
#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int age;
    double salary;

public:
    Employee(string n, int a, double s) { // parameterized constructor
        name = n;
        age = a;
        salary = s;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp1("John", 25, 50000.0); // creating object using parameterized constructor
    emp1.display();

    return 0;
}
