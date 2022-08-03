#include <iostream>
using namespace std;

template <class T> void add(T a){
    cout << a << endl;
}

template <class T> void add(T a, T b){
    cout << (a + b) << endl;
}

template <class T1, class T2> void add(T1 a, T2 b){
    cout << (a + b) << endl;
}

int main(){
    add(10);
    add(11, 12);
    add(12, 12.12);
    return 0;
}