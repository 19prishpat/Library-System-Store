#ifndef BOOK_HPP
#define BOOK_HPP

#include <string> // Include the string library
using namespace std;

// Represents a book with title, author, genre, and year of publication
class Book {
private:
    // The title, author, genre and publishing year of the book
    string title;
    string author;
    string genre;
    int year_published;

public:
    // Initializes a book with default values
    Book();

    // Initializes a book with the specificed values
    Book(const string& title, const string& author, const string& genre, 
    int year_published);

    // Methods to get the title, author, genre and publishing year
    string get_title() const;
    string get_author()const;
    string get_genre() const;
    int get_year_published() const;

    // Compares two books to check if they have anu similarites
    bool operator==(const Book& other) const;
    void print() const;

};

#endif