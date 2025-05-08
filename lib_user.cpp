#include "lib_user.hpp" // Include the header file  for LibraryUser
#include <iostream>

using namespace std;

//Define static constant values for borrow limit in Student/Teacher classes
const int Student::borrow_limit = 5;
const int Teacher::borrow_limit = 10;

// Initializes name, user_id and borrowed_count to default values
LibraryUser:: LibraryUser() : name("N/A"), user_id("N/A"), borrowed_count(0) {}

// Initializes name, user_id and borrowed_count with specified values
LibraryUser::LibraryUser(const string& name, const string& user_id)
    : name(name), user_id(user_id), borrowed_count(0) {}

// Returns the name, user_id and borrowed count of library user
string LibraryUser::get_name() const { return name; }
string LibraryUser::get_user_id() const { return user_id; }
int LibraryUser::get_borrowed_count() const { return borrowed_count; }

// Increments the borrowed_count by 1 when user borrows a book
void LibraryUser::borrow() { ++borrowed_count; }

// Decrements the borrowed_count by 1 when user returns a book
void LibraryUser::return_book() { if (borrowed_count > 0) --borrowed_count; }

// Outputs the name, user ID, and borrowed count of the user to the console
void LibraryUser::print_user() const {
    cout << "Name: " << name << ", User ID: " << user_id 
    << ",  Borrowed Count: " << borrowed_count << endl;
}

// Calls the default constructor of Libraryuser class
Student::Student() : LibraryUser() {}

// Calls the parameterized constructor of the LibraryUser class
Student::Student(const string& name, const string& user_id) : 
LibraryUser(name, user_id) {}

// Calls the default constructor of Libraryuser class
Teacher::Teacher() : LibraryUser() {}

// Calls the parameterized constructor of the LibraryUser class
Teacher::Teacher(const string& name, const string& user_id) : 
LibraryUser(name, user_id) {}

