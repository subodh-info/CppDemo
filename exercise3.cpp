#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int *ptr = &x;
    int*& ptr1 = ptr;
    cout << ptr << endl;
    cout << " ptr2 : " << *ptr1 << end;
    return 0;
}