#ifndef __DOG_H__
#define __DOG_H__
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;
public:

//---- WRITE YOUR CLASS FUNCTIONS BELOW THIS LINE----
    string get_name() {return name;} 
    string set_name(string name_of_dog)
    {
        name = name_of_dog;
        return name; 
    }
    
    int get_age() {return age;} 
    int set_age(int age_of_dog) 
        {
        age = age_of_dog;
        return age; 
        } 

//---- WRITE YOUR CLASS FUNCTIONS ABOVE THIS LINE----
};
#endif 
