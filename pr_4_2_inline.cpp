// C++ program to multiply two numbers using inline function.
#include <iostream>
using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2, result;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Call the multiply function
    result = multiply(num1, num2);

    // Output the result
    cout << "The product of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
