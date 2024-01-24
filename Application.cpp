#include <iostream>
#include "Library.cpp"
#include "Book.cpp"

int main() {
    Library library;

    // Create some book objects
    Book book1("Title 1", "Author 1", 2020);
    Book book2("Title 2", "Author 2", 2018);
    Book book3("Title 3", "Author 3", 2015);

    // Add books to the library
    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);

    // Display all books in the library
    library.displayBooks();

    return 0;
}