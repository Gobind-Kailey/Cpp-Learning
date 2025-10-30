
/*

Need to create a class called TemperatureSensor 

*/


#include <iostream> 

using namespace std; 


class TemperatureSensor 
{
    private: 
        float temperatureC; 

    public: 
        setTemperature(float v)
        {
            temperatureC = v; 
        }
        float getTemperature()
        {
            return temperatureC; 
        } 
        void displayTemperature()
        {
            cout << "Temperature = " << getTemperature() << endl; 
        } 
};


int main()
{
    TemperatureSensor temp1; 
    TemperatureSensor temp2; 
    TemperatureSensor temp3; 

    temp1.setTemperature(5.1);
    temp2.setTemperature(10.9);

    temp2.displayTemperature(); 
    


    return 0; 
}

