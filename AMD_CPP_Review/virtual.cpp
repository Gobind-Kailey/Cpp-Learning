
#include <iostream> 

using namespace std; 



class Base {
public:
    virtual void show() { cout << "Base\n"; }
    virtual ~Base() { cout << "Base destructor\n"; }
};

class Derived : public Base {
public:
    void show() override { cout << "Derived\n"; }
    ~Derived() { cout << "Derived destructor\n"; }
};

int main() {
    Base* b = new Derived();
    b->show();
    delete b;
}
