#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

int main() {
    // declare and initialize vector
    vector<int> vec = {89, 23, 25, 11, 45, 65, 22};
    cout << endl << "vector => " ;
    vector<int> :: iterator it;
    for( it = vec.begin(); it != vec.end(); ++it ) {
        cout << (*it) << "\t";
    }
    // sort the vector's element
    // sort() method default sort the element in ascending order
    sort(vec.begin(), vec.end());
    // after sorting the vector
    // display the vector's element

    cout << endl << "after sorging the algorithms => ";
    for( it = vec.begin(); it != vec.end(); ++it ) {
        cout << (*it) << "\t";
    }

    // sort() method with predefined functor
    // to sort the element in descending order
    sort(vec.begin(), vec.end(), greater<int>());
    // display the vector's element in descending order
    cout << endl << "update vector => ";
    for( it = vec.begin(); it != vec.end(); ++it) {
        cout << (*it) << "\t";
    }
    return EXIT_SUCCESS;
}