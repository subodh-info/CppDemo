#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    // auto x; --> this line show an error because, varaible is no initilized. that mean when we use auto keyword then varaible must be initialize. 
    auto x = 10;
    auto f = 3.14;
    auto name = "subodh";
    auto letter = 'S';

    cout << typeid(x).name() << endl
        << typeid(f).name() << endl
        << typeid(name).name() << endl
        << typeid(letter).name() << endl;
    return EXIT_SUCCESS;
}