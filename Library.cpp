#include <iostream>
#include <vector>
#include "Book.cpp" // Assuming the Book class is defined in Book.h

using namespace std;

class Library {
public:
    Library(); // Constructor

    void addBook(const string& title, const string& author, int publicationYear);
    void displayBooks() const;

private:
    vector<Book> books;
};

Library::Library() {
    // Constructor implementation (if any)
}

void Library::addBook(const string& title, const string& author, int publicationYear) {
    Book newBook(title, author, publicationYear);
    books.push_back(newBook);
    cout << "Book added to the library." << endl;
}

void Library::displayBooks() const {
    cout << "Books in the library:" << endl;
    for (const Book& book : books) {
        book.display();
        cout << endl;
    }
}