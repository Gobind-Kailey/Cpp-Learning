#include <cstring>
#include <iostream>
#include "Mystring.h"

// No-args constructor
// Would it be correect to say we are making a C style string here?
// Yes, we are creating a C-style string that is empty.

using namespace std; 

Mystring::Mystring() // In other words this is the default constructor
    : str{nullptr} { // By initializing str to nullptr, we ensure that it does not point to any invalid memory.
    str = new char[1]; // Allocate memory for a single character on the heap
    *str = '\0';        // why are we creating a pointer here? Because we want to create a C-style string that is empty.
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {               // In the 3 lines below we are checking if the string is null, and if it is 
            str = new char[1];          // we are creating a C-style string that is empty, similar to the no-args constructor.
            *str = '\0';
        } else {
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s); // we are copying s into str, which is a pointer to a char array.
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
     : str{nullptr} {
        str = new char[std::strlen(source.str )+ 1]; 
        // Why allocated + 1 memory on heap?
        // We allocate +1 memory to accommodate the null terminator for C-style strings.
        std::strcpy(str, source.str);
}

// Destructor
Mystring::~Mystring() {
    delete [] str;
}


// Copy assignment 
// Function below is expecting to return a Mystring object by reference
Mystring &Mystring::operator=(const Mystring &rhs){

    std::cout << "Copy assignment: " << str << " -> " << rhs.str << std::endl;
    if (this == &rhs)
        return *this; // Check for self-assignment



    delete [] str; // Free existing resource
    // delete [] this->str; // This also works the same as the line above 

    // I dont completely understand the point of deleting str and then allocating new memory, couldnt we just overwrite 
    // the existing memory with the new string?

    // The main reason for deleting the existing memory is to prevent memory leaks.
    // If we don't delete the old memory, we would lose the reference to it, and it would not be freed when the object is destroyed.
    // By deleting it first, we ensure that we free the old memory before allocating new memory for the new string.

    str = new char[strlen(rhs.str) + 1]; // Allocate new memory
    std::strcpy(str, rhs.str); // Copy the string from rhs to this object

    return *this; // Return the current object by reference
}

// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// length getter
 int Mystring::get_length() const { return std::strlen(str); }
 
  // string getter
 const char *Mystring::get_str() const { return str; }




