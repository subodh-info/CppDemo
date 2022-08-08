#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    // declare and initialize the vector
    vector<int> vec = {12, 15, 45, 32, 56, 98, 13, 20};
    int total_element = vec.size(); // total number of element present in the vector
    // find the distance of max element from first element of vector
    cout << endl << "distance of max element from first element : " << distance(vec.begin(), max_element(vec.begin(), vec.end()));
    // distance() method is helpful to find the index of vector's element.

    // display the index of max_element, first_element, last element and a particular element
    cout << endl << "index of first element : " << distance(vec.begin(), vec.begin());
    cout << endl << "index of max element : " << distance(vec.begin(), max_element(vec.begin(), vec.end()));
    cout << endl << "index of last element : " << distance ( vec.begin(), vec.end()) - 1;
    cout << endl << "index of 45 : " << distance ( vec.begin(), find(vec.begin(), vec.end(), 45));
    cout << endl << "distance of max element from second element of vector => " << distance(++(vec.begin()), max_element(vec.begin(), vec.end()));
    return EXIT_SUCCESS;
}