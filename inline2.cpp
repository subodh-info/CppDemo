#include <iostream>
using namespace std;

class Test{
    public:
    int sum(int a, int b);
};

inline int Test :: sum(int a, int b){
    return a + b;
}

int main(){
    Test test;
    cout << "sum of two integer : " << test.sum(8, 3) << endl;
    return 0;
}