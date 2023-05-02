// i.	Create a class called 'EMPLOYEE' that has - EMPCODE and EMPNAME as data members - member function getdata( ) to input data - member function display( ) to output data Write a main function to create EMP, an array of EMPLOYEE objects. Accept and display the details of at least 6 employees

#include<iostream>
using namespace std;

class EMPLOYEE {
    int EMPCODE;
    string EMPNAME;

    public:
    void getdata() {
        cout << "Enter employee code: ";
        cin >> EMPCODE;
        cout << "Enter employee name: ";
        cin >> EMPNAME;
    }

    void display() {
        cout << "Employee code: " << EMPCODE << endl;
        cout << "Employee name: " << EMPNAME << endl;
    }
};

int main() {
    EMPLOYEE EMP[6];
    cout << "Enter details of 6 employees: " << endl;
    for(int i=0; i<6; i++) {
        EMP[i].getdata();
    }

    cout << "\nDetails of 6 employees: " << endl;
    for(int i=0; i<6; i++) {
        EMP[i].display();
        cout << endl;
    }
    return 0;
}
