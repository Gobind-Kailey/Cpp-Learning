

/*

I need to define a class called power supply 
- Has 2 public attributes: voltage and current 

- Need to add a function/method called displaySpecs()
    - The purpose of this function is to display 
      the voltage and current.

we need to create two instances of the power supply class, 
which creates the calls the displaySpecs and prints them 

*/

#include <iostream> 
using namespace std; 

class PowerSupply
{

    public: 
        int voltage; 
        int current; 

        void displaySpecs()
        {
            // printf("Voltage = %d, Current = %d", voltage, current); 
           cout << "Voltage = " << voltage << " Current = " << current << endl; 
        }

};

int main(){

    PowerSupply object1;
    PowerSupply object2;  
    
    object1.voltage = 1; 
    object1.current = 2; 
    object1.displaySpecs();

    object2.current = 5; 
    object2.voltage = 2; 
    object2.displaySpecs(); 

    

}