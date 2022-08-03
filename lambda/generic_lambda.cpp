#include <iostream>
using namespace std;

int main(){
    auto display = [](auto S){
        cout << S << endl;
    };
    display(12);
    display(12.4);
    display("subodh");
    return 0;
}