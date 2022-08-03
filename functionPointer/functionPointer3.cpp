#include <iostream>
using namespace std;

void printName(char *name)
{
    cout << "Name : " << name << endl;
}

int main()
{
    void (*ptr)(char*); // function pointer declaration
    char n[20]; // declare array to store name
    ptr = printName; // function pointer pointing to the function.
    cout << "enter you name : " << endl;
    cin >>n;
    printName(n);
    return 0;
}