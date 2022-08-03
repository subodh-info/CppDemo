#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int &ref = x;

    cout << "value of x : " << ref << endl;
    ref = 30;
    cout << "new value of x : " << ref << endl;
    x = 20;
    cout << "now, updated value of x : " << ref << endl;
    return 0;
}