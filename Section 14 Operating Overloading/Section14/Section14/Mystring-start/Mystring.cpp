#include <cstring>
#include <iostream>
#include "Mystring.h"

// No-args constructor
// Would it be correect to say we are making a C style string here?
// Yes, we are creating a C-style string that is empty.


Mystring::Mystring() // In other words this is the default constructor
    : str{nullptr} { // By initializing str to nullptr, we ensure that it does not point to any invalid memory.
    str = new char[1]; // Allocate memory for a single character on the heap
    *str = '\0';        // why are we creating a pointer here? Because we want to create a C-style string that is empty.
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
        str = new char[std::strlen(source.str )+ 1];
        std::strcpy(str, source.str);
}

// Destructor
Mystring::~Mystring() {
    delete [] str;
}

// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// length getter
 int Mystring::get_length() const { return std::strlen(str); }
 
  // string getter
 const char *Mystring::get_str() const { return str; }




