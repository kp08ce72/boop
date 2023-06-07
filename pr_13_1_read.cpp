// i.	Write a Program to read a text file and count number of characters in it.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;

    ifstream file(filename);
    if (!file) {
        cout << "Error opening file." << endl;
        return 1;
    }

    int characterCount = 0;
    char ch;
    while (file.get(ch)) {
        characterCount++;
    }

    cout << "Number of characters in the file: " << characterCount << endl;

    file.close();

    return 0;
}
