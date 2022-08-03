#include <iostream>
using namespace std;

int main(){
    auto operation = [](int a, int b, string op) -> double {
        if(op == "sum"){
            return (a + b);
        }
        else{
            return (a + b)/2.0;
        }
    };

    int num1 = 12;
    int num2 = 11;

    double result = operation(num1, num2, "sum");
    cout << "Result : " << result << endl;
    double result2 = operation(num1, num2, "avg");
    cout << "Result : " << result2 << endl;
    return 0;
}