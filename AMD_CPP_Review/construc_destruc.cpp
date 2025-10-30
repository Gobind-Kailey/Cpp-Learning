#include <iostream> 

using namespace std; 




class Regression
{
    public: 
        string testName; 

        // Note that these have no return types 
        // Notice that the constructors and destructors have the 
        // same name as the Class. 
        Regression()
        {
            cout << "This is the default case " << endl; 
            testName = "noName"; 
        }

        // Parameterized constructor 
        Regression(const string &name)
        {
            cout << "Parameterized constructor called" << endl;
            testName = name; 
        }

        // Copy constructor 
        Regression(const Regression &new_name)
        {
            cout << "Copy constructor called" << endl;
            testName = new_name.testName; 
        }

        ~Regression()
        {
            printf("Destructor has been called\n");
        }


}; 

int main()
{
    // Notice that the constructors get called based on 
    // how you construct the objects. 

    Regression obj1; // Default
    Regression obj2("Gobind"); // Parameter constructor 
    Regression obj3 = obj2; // Copy constructor 

    cout << "Obj1 name: " << obj1.testName << endl; 
    cout << "Obj2 name: " << obj2.testName << endl;
    cout << "Obj3 name: " << obj3.testName << endl;  

    // default called n many times, n = number of objects created


   return 0; 
}