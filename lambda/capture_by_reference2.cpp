#include <iostream>
using namespace std;

int main(){
    int num1 = 11;
    int num2 = 12;
    int num3 = 13;
    int num4 = 14;

    auto increment = [&](){
        num1++;
        num2++;
        num3++;
        ++num4;
    };
    increment();
    cout << "value 1 : " << num1 << endl << "value 2 : " << num2 << endl << "value 3 : " << num3 << endl << "value 4 : " << num4 << endl;
    return 0;
}