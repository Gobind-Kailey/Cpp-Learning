/*

Swap Values using Pointers
Specification:

Write a C++ function swap_pointers that takes two integer pointers as input and swaps the values that they are pointing to.  You can use a temporary variable if you wish but try to do it without using any temporary variables.

Function Signature:

void swap_pointers(int* ptr1, int* ptr2);
Input:

ptr1: A pointer to an integer.

ptr2: A pointer to an integer.

Output:

The function should modify the values stored at the memory locations pointed by ptr1 and ptr2, effectively swapping their values.

Example:

int a {5};
int b {10};
 
int* ptrA = &a;
int* ptrB = &b;
 
swap_pointers(ptrA, ptrB);
 
// After the function call, the values should be swapped.
// a == 10, b == 5
Note:

Assume that both input pointers are valid and point to valid memory locations.

*/



#include <iostream>

using namespace std; 


void swapPointers(int *ptr1, int *ptr2)
{
    //-- Write your code below this line
    /*
    (5, 10)
    ptr1 = 5 + 10 = 15
    ptr2 = ptr1 - ptr2 = 15 - 10 = 5
    ptr1 = ptr1 - ptr2 = 15 - 5 = 10
    (10, 5)
    */ 

    *ptr1 =  *ptr1 + *ptr2; // 15
    *ptr2 = *ptr1 - *ptr2;  // 5
    *ptr1 = *ptr1 - *ptr2;  // 10
}

int main()
{


}

// This was finsihed 