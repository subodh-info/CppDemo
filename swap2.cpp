#include <iostream>
using namespace std;

void swap(char *&str1, char *&str2){
    char *temp;
    temp = str1;
    str1 = str2;
    str2 = temp;
}

int main(){ 
    char* str1 = "subodh";
    char* str2 = "kumar";
    cout << "value before swapping --> " << endl;
    cout << "str1 : " << str1 << endl;
    cout << "str2 : " << str2 << endl;
    cout << endl << "value after swapping ---> " << endl;
    swap(str1, str2);
    cout << "str1  :" << str1 << endl;
    cout << "str2 : " << str2 << endl;
    return 0;
}