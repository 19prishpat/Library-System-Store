//***********************************************************************
// Student Name: Prisha Patel
// Student Number: 21135533
//
// Student Name: Shreeya Champaneri
// Student Number: 21131993
//
// SYDE 121 Group Project - Fall 2024 - LIBRARY SYSTEM
// Filename: main.cpp
//
// We hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of our own efforts. This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others.
//
// Project: Library System Group Project
// Purpose: The purpose of this assignment is to implement 
// a library system that stores individual book information, 
// methods to manage books, user information for teachers and students,
// and a user interface to interact with all the classes and their methods.
//
// Due Date: Monday, December 2, 2024
//************************************************************************

#include "book.hpp"
#include "lib.hpp"
#include "lib_user.hpp"
#include <iostream>

int main() {
    //Create a library object
    Library lib;

    //Create book objects
    Book b1("Harry Potter", "J.K. Rowling", "Fantasy", 1997);
    Book b2("The Hobbit", "J.R.R. Tolkien", "Fantasy", 1937);
    Book b3("1984", "George Orwell", "Dystopian", 1949);
    Book b4("Pride and Prejudice", "Jane Austen", "Romance", 1813);
    Book b5("To Kill a Mockingbird", "Harper Lee", "Fiction", 1960);

    //Insert the books into the library
    lib.insert(b1);
    lib.insert(b2);
    lib.insert(b3);
    lib.insert(b4);
    lib.insert(b5);

    //Print the list of books in the library
    lib.print();

    lib.advanced_search("1984", "", "");

    //Remove a book from library using title and author
    lib.remove("The Hobbit", "J.R.R. Tolkien");

    //Create user objects with name and ID
    Student s1("Sarah", "S123");
    Teacher t1("Bob", "T456");

    //Print user information
    s1.print_user();
    t1.print_user();

    return 0;
}
