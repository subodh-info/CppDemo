#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numbers{10, 12, 14, 16, 18};
    cout << "number available in vector ----> " << endl;
    for(auto &x:numbers){
        cout << x << endl;
    }

    // modify the all value available in vector
    for(auto &value: numbers){
        value = value + 5;
    }

    // display modified value
    cout << "Modified value of vector ---> " << endl;
    for(auto &x : numbers){
        cout << x << endl;
    }
    return 0;
}