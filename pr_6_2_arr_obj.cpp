// C++ program using array of objects to compare SPI of 10 different students and print whose SPI is highest.
#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
        string name;
        int rollNo;
        float spi;
    
    public:
        void getDetails() {
            cout << "Enter student name: ";
            cin >> name;
            cout << "Enter roll number: ";
            cin >> rollNo;
            cout << "Enter SPI: ";
            cin >> spi;
        }

        void displayDetails() {
            cout << "Name: " << name << endl;
            cout << "Roll number: " << rollNo << endl;
            cout << "SPI: " << spi << endl;
        }

        float getSPI() {
            return spi;
        }
};

int main() {
    Student students[10];
    float maxSPI = 0.0;
    int maxSPIIndex = -1;

    for(int i = 0; i < 10; i++) {
        cout << "Enter details for student " << i+1 << endl;
        students[i].getDetails();
        cout << endl;
    }

    for(int i = 0; i < 10; i++) {
        if(students[i].getSPI() > maxSPI) {
            maxSPI = students[i].getSPI();
            maxSPIIndex = i;
        }
    }

    cout << "The student with the highest SPI is: " << endl;
    students[maxSPIIndex].displayDetails();

    return 0;
}

