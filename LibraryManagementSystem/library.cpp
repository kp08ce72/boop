#include <iostream>
#include <vector>
#include <algorithm>
#include "book.cpp" 
#include "member.cpp" 

using namespace std;

class Library {
private:
    vector<Book> books;
    vector<Member> members;

public:
    // Book-related methods
    void addBook(const Book& book) {
        books.push_back(book);
    }

    void removeBook(const string& bookID) {
        books.erase(
            remove_if(books.begin(), books.end(), [&bookID](const Book& book) {
                return book.getBookID() == bookID;
            }),
            books.end()
        );
    }

    Book* findBook(const string& bookID) {
        auto it = find_if(books.begin(), books.end(), [&bookID](const Book& book) {
            return book.getBookID() == bookID;
        });

        if (it != books.end()) {
            return &(*it);
        }

        return nullptr;
    }

    // Member-related methods
    void addMember(const Member& member) {
        members.push_back(member);
    }

    void removeMember(const string& memberID) {
        members.erase(
            remove_if(members.begin(), members.end(), [&memberID](const Member& member) {
                return member.getMemberID() == memberID;
            }),
            members.end()
        );
    }

    Member* findMember(const string& memberID) {
        auto it = find_if(members.begin(), members.end(), [&memberID](const Member& member) {
            return member.getMemberID() == memberID;
        });

        if (it != members.end()) {
            return &(*it);
        }

        return nullptr;
    }
};

int main() {
    Library library;

    // Add books
    Book book1("B001", "The Catcher in the Rye", "J.D. Salinger", "Fiction");
    library.addBook(book1);

    Book book2("B002", "To Kill a Mockingbird", "Harper Lee", "Fiction");
    library.addBook(book2);

    // Add members
    Member member1("M001", "John Doe", "123 Main St", "johndoe@example.com");
    library.addMember(member1);

    Member member2("M002", "Jane Smith", "456 Elm St", "janesmith@example.com");
    library.addMember(member2);

    // Find book
    Book* foundBook = library.findBook("B001");
    if (foundBook != nullptr) {
        foundBook->display();
    }

    // Find member
    Member* foundMember = library.findMember("M002");
    if (foundMember != nullptr) {
        foundMember->display();
    }

    return 0;
}
