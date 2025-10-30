#include <iostream> 
#include <string> 

using namespace std; 


class TempSensor
{

    private: 
        int sensorID; 
        float temperatureC; 


    public: 
        // Default
        TempSensor()
        {
            printf("Default called\n"); 
            sensorID = 1; 
            temperatureC = 9.8; 
        }

        // Parameterized

        TempSensor(const int &sensor, const float &temperature)
        {
            // Parameterized called 
            printf("Parameterized called\n"); 
            sensorID = sensor; 
            temperatureC = temperature; 
        }

        // Copy Constructor
        TempSensor(const TempSensor &other)
        {   
            printf("Copy called\n"); 
            sensorID = other.sensorID; 
            temperatureC = other.temperatureC; 

        }
        
        void display()
        {
            printf("sensor = %d: temp = %f \n", sensorID, temperatureC); 
        }
};


int main()
{

    TempSensor* obj1 = new TempSensor(101, 20.8); 
    TempSensor* obj2 = new TempSensor(102, 30.8);
    
    // Note that when we are working with the heap we get a pointer here, 
    // so we have to use the arrow. 
    obj1->display(); 
    obj2->display(); 


    delete obj1;
    delete obj2;


    return 0; 
}

