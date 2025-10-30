
#include <iostream>

using namespace std; 


class DFModule
{

    private: 
        string testName; 
        

    public: 
        
        void setter_test_name(string user_name)
        {
            testName = user_name; 
        }

        void runTest()
        {
            cout << "Testname = " << testName << endl; 
        } 
        

};


int main()
{

    DFModule object1; 

    object1.setter_test_name("Apple");
    object1.runTest(); 

    return 0;   
}