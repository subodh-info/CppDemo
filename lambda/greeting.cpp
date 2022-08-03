#include <iostream>
using namespace std;

auto greet = [](){
    cout << "Welcome to c++ lambda expression";
};

int main(){
    greet();
    return 0;
}