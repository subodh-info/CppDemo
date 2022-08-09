#include <iostream>
#include <unordered_set>
using namespace std;

/*
    this program remove the duplicate elements from array with the help of unordered_list
*/
void printDuplicate(int arr[], int count){
   
    // declare unordered_set to store the unique element
    unordered_set<int> intset;
    // declare unordered_set to store the duplicate element from array
    unordered_set<int> duplicate;

    for ( int i = 0; i < count; ++i ) {
        // duplicate elements are not found
        if(intset.find(arr[i]) == intset.end()) {
            intset.insert(arr[i]); // if duplicate element is not present then it store in this unordered_set
        }
        else {
            // if duplicate element present in the array then
            duplicate.insert(arr[i]);
        }
    }
    
    // display the duplicate element
    unordered_set<int> :: iterator it;
    for(it = duplicate.begin(); it != duplicate.end(); ++it) {
        cout << endl << *it;
    }
}

int main() {
    // declare and initialize array
    int arr[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};
    // calculate the length of array
    int count = sizeof(arr)/sizeof(arr[0]);
    // print duplicate element
    printDuplicate(arr, count);
    return EXIT_SUCCESS;
}