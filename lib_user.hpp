#ifndef LIB_USER_HPP
#define LIB_USER_HPP

#include <string>
using namespace std;

// Class representing a generic library user
class LibraryUser {
private:
    // User info like name, user ID and borrowed count
    string name;
    string user_id;
    int borrowed_count;

public:
    LibraryUser();
    LibraryUser(const string& name, const string& user_id);

    // Getter for the various attributes of the user
    string get_name() const;
    string get_user_id() const;
    int get_borrowed_count() const;
    void borrow();
    void return_book();
    void print_user() const;
};

// Class representing a student as a library user
class Student : public LibraryUser{
private:
    static const int borrow_limit;

public:
    Student(); // Default constructor

    // Parameterised constructor
    Student(const string& name, const string& user_id);
};

// Class representing a teacher as a library user
class Teacher : public LibraryUser {
private:
    static const int borrow_limit;
public:
    Teacher(); // Default constructor

    // Parameterised constructor
    Teacher(const string& name, const string& user_id);
};

#endif