#include <iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout << "base class constructor" << endl;
    }

    virtual ~Base(){
        cout << "base class destructor" << endl;
    }
};

class Derived : public Base {
    public:
    Derived(){
        cout << "derived class constructor" << endl;
    }

    ~Derived(){
        cout << "derived class destructor" << endl;
    }
};

int main(){
    //Base b;
    //Derived d;
    //Base *bptr = new Base();
    //Derived *dptr = new Derived();
    //delete bptr;
    //delete dptr;

    Base *bptr = new Derived();
    delete bptr;
    return 0;
}