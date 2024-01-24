
#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int publicationYear;
public:
    Book() : title(""), author(""), publicationYear(0) {}

    Book(const string& title, const string& author, int publicationYear)
        : title(title), author(author), publicationYear(publicationYear) {}

 
    const string& getTitle() const {
        return title;
    }

    void setTitle(const string& title) {
        this->title = title;
    }

    const string& getAuthor() const {
        return author;
    }

    void setAuthor(const string& author) {
        this->author = author;
    }

    int getPublicationYear() const {
        return publicationYear;
    }

    void setPublicationYear(int year) {
        this->publicationYear = year;
    }

    void display() const {
        cout << "Title: " << title << "\nAuthor: " << author << "\nPublication Year: " << publicationYear << endl;
    }

    friend ostream& operator<<(ostream& out, const Book& book) {
        out << "Title: " << book.title << "\nAuthor: " << book.author << "\nPublication Year: " << book.publicationYear;
        return out;
    }
};
