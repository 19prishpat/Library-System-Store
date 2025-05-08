#include "lib.hpp"
#include <iostream>

using namespace std;

//Contructor that initializes an empty library
Library::Library() {}

//This method inserts a book into the library if it doesn't already exist
void Library::insert(const Book& book) {
    //Check if the book already exists in the library
    for (const auto& b : books) {
        if (b == book) {
            //If a duplicate is found, display a message and exit
            cout << "Book already exists in the library." << endl;
            return;
        }
    }
    //Add the new book to the library and mark it as not borrowed
    books.push_back(book);
    is_borrowed.push_back(false);
    cout << "Book inserted successfully." << endl;
}

//This function removes a book from the library by its title and author
bool Library::remove(const string& title, const string& author) {
    //Iterate through the list of books
    for (size_t i = 0; i < books.size(); ++i) {
        //Check if the current book matches the given title and author
        if (books[i].get_title() == title && books[i].get_author() == author) {
            //Remove the book and its borrow status from the library
            books.erase(books.begin() + i);
            is_borrowed.erase(is_borrowed.begin() + i);
            cout << "Book removed successfully." << endl;
            return true;
        }
    }
    //Display a message if no matching book is found
    cout << "Book not found in the library." << endl;
    return false;
}

//Performs an advanced search for books matching the given criteria
void Library::advanced_search(const string& title, const string& author, 
const string& genre) const {
    //iterate through the list of books
    for (const auto& book : books) {
        //Check if any of the book's attributes contain the search strings
        if (book.get_title().find(title) != string::npos ||
            book.get_author().find(author) != string::npos ||
            book.get_genre().find(genre) != string::npos) {
            //Print book details and exit the function if a match is found
            book.print();
            return;
        }
    }
    //Dislay a message if no matches are found
    cout << "No matching books found." << endl;
}

//Print the details of all books in the library with their availability status
void Library::print() const {
    //Iterate through the list of books
    for (size_t i = 0; i < books.size(); ++i) {
        //Print the book's details
        cout << "Book " << i + 1 << ": ";
        books[i].print();
        //Display if the book is borrowed or available
        cout << (is_borrowed[i] ? " (Borrowed)" : " (Available)") << endl;
    }
}
