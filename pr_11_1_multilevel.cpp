//ii.	Write a program for multilevel inheritance.

#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    void eat() {
        cout << "The animal is eating." << endl;
    }
};

// Derived class from Animal
class Mammal : public Animal {
public:
    void giveBirth() {
        cout << "The mammal is giving birth." << endl;
    }
};

// Derived class from Mammal
class Dog : public Mammal {
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};

int main() {
    Dog dog;

    // Set the name
    dog.setName("Buddy");

    // Perform actions
    dog.eat();
    dog.giveBirth();
    dog.bark();

    return 0;
}
