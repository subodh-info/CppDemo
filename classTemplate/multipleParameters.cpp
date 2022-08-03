#include <iostream>
using namespace std;

template <class T1, class T2>
class Demo{
    public:
    T1 a;
    T2 b;

    Demo(T1 x, T2 y){
        a = x;
        b = y;
    }

    void display(){
        cout << "value of a and b : " << a << ", " << b << endl;
    }
};

int main(){
    Demo<int, float> demo(12, 12.23);
    demo.display();

    Demo<int, string> demo2(101, "subodh");
    demo2.display();
    return 0;   
}