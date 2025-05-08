#include "book.hpp" // Include the header file for the Book class
#include <iostream>

using namespace std;

// Initializes a Book object with default values
Book::Book() : title("N/A"), author("N/A"), genre("N/A"), year_published(0) {}

// Initializes a Book object with given values
Book::Book(const string& title, const string& author, const string& genre,
int year_published)
    : title(title), author(author), genre(genre), year_published(year_published) {}

// Returns the title of the book
string Book::get_title() const { return title; }

// Returns the autor of the book
string Book::get_author() const { return author; }

// Returns the book genre
string Book::get_genre() const { return genre; }

// Returns the year the book was published
int Book::get_year_published() const { return year_published; }

// Compares two Book objects to see if they are equal
bool Book::operator==(const Book& other) const {
    return title == other.title && author == other.author && genre == other.genre 
    && year_published == other.year_published;
}

// Outputs the details of the book to the console
void Book::print() const {
    cout << "Title: " << title 
    << ", Author: " << author 
    << ", Genre: " << genre 
    << ", Year: " << year_published << endl;
}