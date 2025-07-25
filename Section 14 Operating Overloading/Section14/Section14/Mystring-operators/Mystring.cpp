#include <iostream>
#include <cstring>
#include <cctype>
#include "Mystring.h"

// No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[std::strlen(source.str)+ 1];
        std::strcpy(str, source.str);
        std::cout << "Copy constructor used" << std::endl;
}

// Move constructor
Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
        std::cout << "Move constructor used" << std::endl;
}

// Destructor
Mystring::~Mystring() {
    delete [] str;
}

// Copy assignment operator
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
}

// Move assignment operator
Mystring &Mystring::operator=( Mystring &&rhs) {
    std::cout << "Using move assignment" << std::endl;
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Equality
bool Mystring::operator==(const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str) == 0);
}

// Make lowercase
Mystring Mystring::operator-() const {
    char *buff= new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for (size_t i=0; i<std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Concatentate
Mystring Mystring::operator+(const Mystring &rhs) const {
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// length getter
 int Mystring::get_length() const { return std::strlen(str); }
 
 // string getter
 const char *Mystring::get_str() const { return str; }










 // Equality Operator 
 bool Mystring::operator==(const Mystring &rhs) const
 {
    return (strcmp(str, rhs.str) == 0)
 }

// Lowercase Operator 
// The reason why this is const is because we are not modifying the current object
// Notice that we are making the function const, that means we are not modifying the current object
Mystirng Mystring::operator-() const
{
    char *buff = new char[strlen(str) + 1]; // Plus 1 for the null terminator
    strcpy(buff, str);
    for (size_t i = 0; i < strlen(buff); i++)
        buff[i] = tolower(buff[i]);
    Mystring temp = buff; // What is the point of createing a temporary object here?
    // I created this because we needed somehting to temproarly hold the value 

    delete [] buff; // We need to delete the buffer to avoid memory leaks
    return temp; // Return the temporary object
}

// Concatenation Operator 

Mystring Mystring::operator+(const Mystring &rhs) const{ // Why is this const? 
     char* buff = new char[strlen(str) + strlen(rhs.str) + 1]; // Plus 1 for the null terminator
     strcpy(buff, str);
     strcat(buff, rhs.str); 
     Mystring temp{buff}; // Create a temporary object to hold the value
        delete [] buff; // We need to delete the buffer to avoid memory leaks
    return temp; // Return the temporary object
    
}