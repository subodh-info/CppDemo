#include <iostream>
using namespace std;

int fun(int& x){
    return x;
}

int main(){
    cout << fun(10) << endl; // at this line we will get error, because initial value for reference variable can not constant. 
    return 0;
}