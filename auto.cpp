#include <iostream>
using namespace std;

int main(){
    int a; // automatic variable, auto keyword is implicit (no required to use or we can use 'auto' keyword to declare this variable.)
    cout << "a = " << a << endl; // at this point we will get garbage value. because, local/automatic variable by default initialized with garbage value.
    a = 20;
    {
        int a = 11;
        for(int i= 1; i <= 3; ++i){
            cout << a <<" "; // here, the valur of a will be print 3 times. because, a is local variable and its scope is only within this block. 
        }
    }
    ++a;
    cout << endl << "a = " << a << endl; // here, the output is 21. because, value of a is initiliazed with 20 and it is increased by '++' operator. 
    return EXIT_SUCCESS;
}