#include <iostream>
using namespace std;

template <class T> T add(T &a, T &b){
    T result;
    result =  a + b;
    return result;
}

int main(){
    int a, b;
    a = 12; b = 14;
    float m, n;
    m = 11.11; n = 1.23;
    cout << "sum of integer : " << add(a, b) << endl;
    cout << "sum of float : " << add(m, n) << endl;
    return 0;
}