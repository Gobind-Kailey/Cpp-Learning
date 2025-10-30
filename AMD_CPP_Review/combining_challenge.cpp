

#include <iostream>


using namespace std; 


class Module
{
    private:
        string string_name; 
    
    public:

        virtual void initialize()
        {
            printf("Base Called\n"); 
        }

        void set_name(string user_input)
        {
            string_name = user_input; 
        }
        string get_name()
        {
            return string_name; 
        }
    
};


class DFTModule : public Module
{
    public: 
        void runDFTTEST()
        {
            cout << "String_name" << get_name() << endl; 
        }
        void initialize() override 
        {
            printf("This will be used to override\n"); 
        }
};

int main()
{

    Module object1; 
    object1.Module::initialize(); 
    

    object1.set_name("Gobind");
    object1.get_name(); 

    DFTModule object2; 

    object2.initialize(); 

    object2.set_name("Curry"); 
    object2.runDFTTEST(); 
}

