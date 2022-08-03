#include <iostream>
using namespace std;

auto add = [](int a, int b){
    cout << "Sum : " << (a + b) << endl;
};

int main(){
    add(1, 2);
    return 0;
}