#include <iostream>
using namespace std;

class One{
    int _x;

    public:
    One(){}
   // One(int x) : _x{x} {}

    int getValue(){
        return this->_x;
    }
};

class Two{
    One a;

    public:
    // Two(One x) : a{x} {}

    Two(One x){
        a = x;
    }
    void print(){
        cout << "value of _x is : " << a.getValue() << endl;
    }
};

int main(){
    // Two two(11);
    One o;
    Two two(o);
    two.print();
    return 0;
}