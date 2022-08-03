#include <iostream>
using namespace std;

int main(){
    int x = 11;
    int& value = x;
    cout << "value of x : " << value;
    return 0;
}