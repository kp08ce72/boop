// ii.	Write a Program to read a text file and copy it to another text file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string sourceFilename, destinationFilename;

    cout << "Enter the source filename: ";
    cin >> sourceFilename;

    cout << "Enter the destination filename: ";
    cin >> destinationFilename;

    ifstream sourceFile(sourceFilename);
    if (!sourceFile) {
        cout << "Error opening source file." << endl;
        return 1;
    }

    ofstream destinationFile(destinationFilename);
    if (!destinationFile) {
        cout << "Error creating destination file." << endl;
        return 1;
    }

    char ch;
    while (sourceFile.get(ch)) {
        destinationFile.put(ch);
    }

    cout << "File copied successfully." << endl;

    sourceFile.close();
    destinationFile.close();

    return 0;
}
