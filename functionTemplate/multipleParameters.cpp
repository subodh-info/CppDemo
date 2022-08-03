#include <iostream>
using namespace std;

template <class X, class Y> void display(X a, Y b){
    cout << "value of a : " << a << endl << "value of b :" << b << endl;
}

int main(){
    display(11, 1.23);
    display(101, "subodh");
    return 0;
}