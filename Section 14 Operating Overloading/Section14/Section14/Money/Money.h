#ifndef _MONEY_H_
#define _MONEY_H_


#include <iostream>

using namespace std; 

class Money
{
    // Declaring fields as private
    int dollars; 
    int cents; 
public:
    // 
    Money(int dollars, int cents);  // Constructor with two parameters
    Money(int total);   

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR METHOD DECLARATIONS BELOW THIS LINE----
    
    // Equality Operators
    // What is the purpose of each of the const in the method declaration? 
    // The const at the end of the method declaration means that this method will not modify the current object
    // The one on the inside means that we will not modify the rhs parameter. 
    bool operator==(const Money &rhs)const;   
    bool operator!=(const Money &rhs)const;
    
    //----WRITE YOUR METHOD DECLARATIONS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
};



}










#endif // _MONEY_H_