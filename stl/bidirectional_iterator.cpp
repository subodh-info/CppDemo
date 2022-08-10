#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    // declare and initialize the vector
    vector<int> vec = {12, 13, 9, 7, 15, 22, 19};
    // declare the iterator
    vector<int> :: iterator it;
    
    for( it = vec.begin(); it != vec.end(); ++it) {
        // assigning the value on that location from where iterator pointing
        (*it) = (*it) * 3;
    }

    for( it = vec.begin(); it != vec.end(); ++it ) {
        // accessing the value of that location from where iterator pointing
        cout << (*it) << endl;
    }

    // display the element from end to begin
    cout << "\n\n vector's element in reverse order : \n";
    for(it = vec.end(); it != vec.begin(); --it) {
        if(it != vec.end()) {
            cout << (*it) << endl;
        }
    }
    cout << (*it) << endl; // to display the first element of vector
    return EXIT_SUCCESS;
}