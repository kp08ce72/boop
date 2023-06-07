#include <iostream>
#include <string>
using namespace std;

class Member {
private:
    string memberID;
    string name;
    string address;
    string contact;

public:
    // Constructor
    Member(string memberID, string name, string address, string contact)
        : memberID(memberID), name(name), address(address), contact(contact) {}

    // Getters
    string getMemberID() const {
        return memberID;
    }

    string getName() const {
        return name;
    }

    string getAddress() const {
        return address;
    }

    string getContact() const {
        return contact;
    }

    // Setters
    void setMemberID(string memberID) {
        this->memberID = memberID;
    }

    void setName(string name) {
        this->name = name;
    }

    void setAddress(string address) {
        this->address = address;
    }

    void setContact(string contact) {
        this->contact = contact;
    }

    // Other methods
    void display() const {
        cout << "Member ID: " << memberID << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Contact: " << contact << endl;
    }
};

int main() {
    Member member("M001", "John Doe", "123 Main St", "johndoe@example.com");
    member.display();

    return 0;
}
