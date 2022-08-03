#include <iostream>
using namespace std;

inline int sum(int a, int b){
    return a + b;
}

int main(){
    cout << "sum of two integer : " << sum(11, 7) << endl;
    return 0;
}