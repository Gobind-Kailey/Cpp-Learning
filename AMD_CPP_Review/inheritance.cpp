#include <iostream>


using namespace std; 


class Module 
{

    public:
    
        void powerOn() {printf("Power ON \n");};
        void powerOff() {printf("Power Off ");};


};

class DFTModule : public Module
{
    public: 
        void runDFT() {printf("Run DFT");}; 
        
};

int main()
{
    DFTModule object1; 

    object1.powerOff();
    object1.powerOn();
    object1.runDFT();


    return 0; 
}