#include <iostream>
using namespace std;

int main(){
    int *ptr = NULL;
    int& ref = *ptr;
    cout << ref << endl;
    return 0;
}