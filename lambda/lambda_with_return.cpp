#include <iostream>
using namespace std;

auto add = [](int a, int b) {
    return (a + b);
};

int main(){
    int result;
    result = add(1, 12);
    cout << "Result : " << result << endl;
    return 0;
}