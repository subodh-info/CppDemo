#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    string names[] = {"subodh", "rahul", "ajay", "akshay", "amit"};
    cout << typeid(names).name() << endl;
    return EXIT_SUCCESS;
}