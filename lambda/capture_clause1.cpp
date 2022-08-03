#include <iostream>
using namespace std;

int main(){
    int value = 100;

    auto my_value = [value](){
        //value = value + 10; --> At this line we will get error. because, variable of capture clause can be read only inside lambda body and can not be modify.
        cout << value << endl;
    };

    my_value();
    return 0;
}