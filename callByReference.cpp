#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 11;
    int y = 22;

    cout << "value before swapping ===> " << endl;
    cout << "X : " << x << endl << "Y : " << y << endl;

    swap(&x, &y);

    cout << endl << "value after swapping ====> " << endl;
    cout << "X : " << x << endl << "Y : " << y << endl;

    return 0;
}