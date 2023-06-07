//i.	Write a C++ Program that shows use of this pointer.

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void introduce() {
        cout << "Hello, my name is " << this->name << "." << endl;
        cout << "I am " << this->age << " years old." << endl;
    }

    void celebrateBirthday() {
        this->age++;
        cout << "Happy birthday to me!" << endl;
        cout << "Now I am " << this->age << " years old." << endl;
    }
};

int main() {
    Person person("Alice", 25);

    person.introduce();
    person.celebrateBirthday();

    return 0;
}
