#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    cout << "size of vector : " << vec.size() << endl;
    cout << "Capacity of vector : " << vec.capacity() << endl;

    vec.push_back(12);
    vec.push_back(15);

    cout << "new size of vector : " << vec.size() << endl;
    cout << "new capacity of vector : " << vec.capacity() << endl;
    
    return EXIT_SUCCESS;
}