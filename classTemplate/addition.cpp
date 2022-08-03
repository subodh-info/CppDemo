#include <iostream>
using namespace std;

template <class T>
class Addition{
    public:
    T a = 5;
    T b = 2;

    void add(){
        cout << "addition : " << (a + b) << endl;
    }
};

int main(){
    Addition<int> addition;
    addition.add();

    Addition<float> addition2;
    addition2.add();

    return 0;
}