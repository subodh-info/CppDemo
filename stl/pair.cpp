#include <iostream>
#include <utility>
using namespace std;

int main() {
    // declare pair
    pair<int, string> p;
    // insert value as first value and second value to create pair
    p.first = 101; 
    p.second = "subodh";
    // display the first and second value from pair
    cout << endl << "first => " << p.first;
    cout << endl << "second => " << p.second;
    return EXIT_SUCCESS;
}