#include <iostream>
#include <functional>
using namespace std;

int main(){
    function<void(int , int)> add = [](int a, int b){
        cout << "Sum : " << (a + b) << endl;
    };
    add(1, 21);
    return 0;
}