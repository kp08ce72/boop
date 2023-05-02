// to print whether a number entered by user is a prime number or not.

#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    // Prime numbers are greater than 1
    if (num > 1) {
        // Check for factors
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    } else {
        isPrime = false;
    }

    if (isPrime) {
        cout << num << " is a prime number" << endl;
    } else {
        cout << num << " is not a prime number" << endl;
    }

    return 0;
}
