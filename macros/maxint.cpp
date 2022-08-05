#include <iostream>
#include <climits>
using namespace std;

int main(){
    cout << "size of int : " << sizeof(int) << endl;
    cout << "size of float : " << sizeof(float) << endl;
    cout << "size of double : " << sizeof(double) << endl;
    cout << "size of char : " << sizeof(char) << endl;
    cout << "size of long : " << sizeof(long) << endl;
    cout << "size of short : " << sizeof(short) << endl; 
    cout << "size of long int : " << sizeof(long int) << endl;
    cout << "maximum value of long : " << LONG_MAX << endl;
    cout << "maximum value of char : " << CHAR_MAX << endl;
    cout << "minimum value of char : " << CHAR_MIN << endl;
    cout << "maximum value of int :" << INT_MAX << endl;
    cout << "minimum value of int : " << INT_MIN << endl;
    return 0;
}