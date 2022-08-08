#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric> // for accumulate operation
using namespace std;

int main(){
    // declare and initialize array
    int arr[] = {11, 14, 8, 9, 7, 3, 5};
    // calculate number of elements present in the array
    int n = sizeof(arr)/sizeof(arr[0]);
    // declare and initialize vector
    vector<int> vec(arr, arr+n);
    // display elements of vector
    cout << endl << "vector's elements => \n";
    for (int i = 0; i < n; ++i){
        cout << "\t" << vec[i];
    }

    // sort the vector
    sort(vec.begin(), vec.end());
    //now, display update vector's element
    cout << "\n Updated vector => ";
    for (int i = 0; i < n; ++i){
        cout << "\t" << vec[i];
    }
    
    // reverse the vector
    reverse(vec.begin(), vec.end());
    // now, display the updated vector
    cout << "\n\n Updated vector => ";
    for (int i = 0; i < n; ++i){
        cout << "\t" << vec[i];
    }
    // max elements in the vector
    cout << "\n Max element : " << *(max_element(vec.begin(), vec.end()));
    // min element in the vector
    cout << "\n Min element : " << *(min_element(vec.begin(), vec.end()));
    // sum of all elements present in the vector
    cout << endl << "sum : " << accumulate(vec.begin(), vec.end(), 0);
    return EXIT_SUCCESS;
}