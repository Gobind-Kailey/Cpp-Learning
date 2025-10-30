

#include <iostream>


using namespace std; 



class Module
{
    public: 

    virtual void initialize()
    {
        printf("In the Parent Class "); 
    }

}; 

class DFTModule : public Module
{
    public: 
    // Note that override is a keyword, it is equivalent to writing
    // nothing there. 
        void initialize() override
        {
            printf("Seeing if we can override ");
        }

};

int main()
{

    DFTModule r_object; 

    // Note that both of these will call the child class
    Module* m = new DFTModule(); 
    m -> initialize(); 

    r_object.initialize(); 
    // The statement below shows how to call the parent class
    r_object.Module::initialize();


    return 0; 
}