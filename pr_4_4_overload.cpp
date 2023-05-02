// to overload the max function.
// (1)	Find the max number from three numbers.
// (2)	Find the max string from three strings.

#include <iostream>
#include <string>
using namespace std;

// Overloaded function to find the max of three numbers
int max(int a, int b, int c) {
    int max_num = a;
    if (b > max_num) {
        max_num = b;
    }
    if (c > max_num) {
        max_num = c;
    }
    return max_num;
}

// Overloaded function to find the max of three strings
string max(string a, string b, string c) {
    string max_str = a;
    if (b > max_str) {
        max_str = b;
    }
    if (c > max_str) {
        max_str = c;
    }
    return max_str;
}

int main() {
    // Find the max of three numbers
    int num1 = 10, num2 = 20, num3 = 15;
    int max_num = max(num1, num2, num3);
    cout << "The max of " << num1 << ", " << num2 << ", and " << num3 << " is " << max_num << endl;

    // Find the max of three strings
    string str1 = "apple", str2 = "banana", str3 = "cherry";
    string max_str = max(str1, str2, str3);
    cout << "The max of " << str1 << ", " << str2 << ", and " << str3 << " is " << max_str << endl;

    return 0;
}
