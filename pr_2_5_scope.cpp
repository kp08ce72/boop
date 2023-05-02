// to print global and local values of a variable using scope resolution operator.

#include <iostream>
using namespace std;

int x = 10; // global variable

int main() {
    int x = 5; // local variable

    cout << "Local variable x = " << x << endl;
    cout << "Global variable x = " << ::x << endl;

    return 0;
}
