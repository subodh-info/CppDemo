#include <iostream>
using namespace std;

int add(int first, int second){
    return (first + second);
}

int main(){
    int (*funPtr)(int, int); // function pointer declaration
    funPtr = add; // function pointer pointing to the add method
    int sum = funPtr(5, 3); // call function by function pointer and stored return value in a variable.
    cout << "Address of add() => " << funPtr << endl;
    cout << "Result : " << sum << endl;
    return 0;
}