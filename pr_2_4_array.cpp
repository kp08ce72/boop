// to find sum and average of 10 numbers and sort element of 1D array in ascending order
#include <iostream>
using namespace std;

int main() {
    int arr[10], temp, sum = 0;
    float average;

    // Input 10 numbers from user
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    // Calculate average
    average = (float) sum / 10;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    // Sort the array in ascending order
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print the sorted array
    cout << "Sorted array in ascending order:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}