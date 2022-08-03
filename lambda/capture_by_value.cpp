#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 2;
    int c = 3;
    auto display = [a, b, c](){
        cout << "a : " << a << endl << "b : " << b << endl << "c : " << c << endl;
    };
    display();

    cout << endl << endl << endl;
    int d = 4;
    auto display2 = [=](){
        cout << "a : " << a << endl << "b : " << b << endl << "c : " << c << endl << "d : " << d << endl;
        // cout << "e : " << e << endl; --> At this line we will get error. because, e is after this method.
    };
    int e = 5;
    display2();

    return 0;
}