#include <iostream>
using namespace std;

int* add(int a, int b){
    int result;
    result = a + b;
    return &result;
}

int main(){
    int *result;
    result = add(12, 11);
    cout << "Sum of two integer : " << *result << endl;
    return 0;
}