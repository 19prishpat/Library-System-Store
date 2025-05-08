#ifndef LIB_HPP
#define LIB_HPP

using namespace std;

#include "book.hpp"
#include <vector>
#include <string>

class Library {
private:
    //vector to store the collection of books
    vector<Book> books;
    //vector to track the status of if a book is borrowed or not
    vector<bool> is_borrowed;

public:
    Library(); // Default constructor
    //Adds a new book to the library
    void insert(const Book& book);

    //Removes a book from the library based on title and author
    bool remove(const string& title, const string& author);

    //Searches for a book using title, author, or genre
    void advanced_search(const string& title, const string& author, 
    const string& genre) const;
    
    //prints details of all books in the library
    void print() const;
};

#endif // LIB_HPP
