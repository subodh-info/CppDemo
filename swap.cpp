#include <iostream>
using namespace std;

void swapValue(int &first, int &second){
    int temp;
    temp = first;
    first = second;
    second = temp;
}

int main(){
    int a=12, b = 14;
    cout << "value before swapping ----> " << endl;
    cout << "A : " <<a << endl << "B : " <<b << endl;

    swapValue(a, b);
    cout << "Value after swapping ------> " << endl;
    cout << "A : " << a << endl << "B : " << b << endl;
    return 0;
}