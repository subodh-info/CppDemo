#include <iostream>
using namespace std;

int add(int a, int b){
    return (a + b);
}

void display(int (*ptr)(int, int)){
    int result = ptr(12, 21);
    cout << "Result : " << result << endl;
}

int main(){
    display(add);
    return 0;
}