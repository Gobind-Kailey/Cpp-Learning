#include <stdio.h>
using namespace std;
#include "Mystring.h"

int main() {

    Mystring empty;                      // no-args constructor
    Mystring larry("Larry");             // overloaded constructor
    Mystring stooge {larry};            // copy constructor 
    
    //- how is the line of code calling the copy constructor?
    // The line `Mystring stooge {larry};` is using the copy constructor
    // What's really written up there is Mystring stooge = larry;

    empty.display();
    larry.display();    
    stooge.display();



    return 0;
}