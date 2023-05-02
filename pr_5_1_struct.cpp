// to declare structure of college_info like college_name, college_code, dept,intake, initialize and display contents of member variables.

#include <iostream>
#include <string>
using namespace std;

struct college_info {
    string college_name;
    int college_code;
    string dept;
    int intake;
};

int main() {
    college_info info;

    // Initialize the member variables
    info.college_name = "ABC College";
    info.college_code = 123;
    info.dept = "Computer Science";
    info.intake = 100;

    // Display the contents of member variables
    cout << "College Name: " << info.college_name << endl;
    cout << "College Code: " << info.college_code << endl;
    cout << "Department: " << info.dept << endl;
    cout << "Intake: " << info.intake << endl;

    return 0;
}


