#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string bookID;
    string title;
    string author;
    string genre;
    bool availability;

public:
    // Constructor
    Book(string bookID, string title, string author, string genre)
        : bookID(bookID), title(title), author(author), genre(genre) {
        availability = true; // By default, book is available
    }

    // Getters
    string getBookID() const {
        return bookID;
    }

    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    string getGenre() const {
        return genre;
    }

    bool isAvailable() const {
        return availability;
    }

    // Setters
    void setBookID(string bookID) {
        this->bookID = bookID;
    }

    void setTitle(string title) {
        this->title = title;
    }

    void setAuthor(string author) {
        this->author = author;
    }

    void setGenre(string genre) {
        this->genre = genre;
    }

    void setAvailability(bool availability) {
        this->availability = availability;
    }

    // Other methods
    void display() const {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Genre: " << genre << endl;
        cout << "Availability: " << (availability ? "Available" : "Not Available") << endl;
    }
};

int main() {
    Book book("B001", "The Catcher in the Rye", "J.D. Salinger", "Fiction");
    book.display();

    return 0;
}
