#include <iostream>
using namespace std;

int main(){
    int num = 2;

    auto increse_by_one = [&num](){
        num++;
    };
    increse_by_one();
    cout << "now, final value : " << num << endl;
    return 0;
}