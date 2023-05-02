// C++ Program to sort two numbers using call by reference

#include <iostream>
using namespace std;

void sort(int &a, int &b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Call the sort function using call by reference
    sort(num1, num2);

    // Output the sorted numbers
    cout << "The sorted numbers are: " << num1 << " " << num2 << endl;

    return 0;
}

