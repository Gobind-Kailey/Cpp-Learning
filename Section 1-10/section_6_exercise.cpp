#include <iostream>


using namespace std; 


int main(){


    int small_rooms;
    int big_rooms; 

    printf("Hello, welcome to Frank's Carpet Clearning Service \n");

    cout << "How many small? " << endl;

    cin >> small_rooms, 
    cout << "How many big rooms";
    cin >> big_rooms; 

    int cost = 25*small_rooms + 35 *big_rooms;
    cout << "Cost: " << cost << endl; 

    cout << "Tax: " << cost * 0.06; 




    return 0; 
}