#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    // declare and initialize vector
    vector<int> vec = {11, 13, 15, 17, 19, 11, 21, 13, 23, 15, 25, 17, 27, 19};
    // find total number of elements in vector
    int total_count = vec.size();
    cout << endl << "total number of elements : " << total_count;
    // display elements of vector
    cout << endl << "Vector ==> : ";
    for ( int i = 0; i < total_count; ++i ) {
        cout << "\t" << vec[i];
    }
    // total number of occurence of element 11
    cout << endl << "total number of occurence of 11 : " << count(vec.begin(), vec.end(), 11);

    // find() returns the iterator to the last element if element is not found
    ( find(vec.begin(), vec.end(), 13) != vec.end() ) ? cout << endl << "element found" : cout << endl << "element not found"; // output -> element found. Because, 13 present in the vector
    // suppose an element does not present in vector then.
    ( find(vec.begin(), vec.end(), 49) != vec.end() ) ? cout << endl << "element found" : cout << endl << "element not found";   

    return EXIT_SUCCESS;
}