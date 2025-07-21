#include "Money.h"

#include <iostream>

using namespace std; 


Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}
   

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----

bool Money::operator==(const Money &rhs) const 
{
    return (dollars == rhs.dollars && cents == rhs.cents);
}

bool Money::operator!=(const Money &rhs) const 
{
    return !(*this == rhs); // Why use a pointer with this? 
    // Because we are calling the equality operator on the current object
    // Could it also be because we are derefercing the left-hand side of the operator?
}
//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----

