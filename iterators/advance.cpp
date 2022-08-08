#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main(){
    vector<int> vec = {11, 12, 14, 15, 17, 19, 21, 23, 34};
    // advance() method inceae the position of iterator till the specified element of vector.
    // declare and intialize the iterator.
    vector<int> :: iterator ptr = vec.begin();
    // increase the iterator position to point the element at 4th index
    advance(ptr, 4);
    // display the element after increasing the position
    cout << endl << "element : " << *ptr;
    return EXIT_SUCCESS;
}