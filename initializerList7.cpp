#include <iostream>
using namespace std;

class Base{
    int _x;

    public:
    Base(int x){
        _x = x;
    }

    int getValue() { return this->_x;}
};

class Child : public Base{
    public: 
    int _y;
    Child(int x, int y) : Base{x}, _y{y} { }
};

int main(){
    Child child(12, 11);
    cout << "value of _x  : " << child.getValue() << endl;
    cout << "value of _y : " << child._y << endl;
    return 0;
}