#include <iostream>
#include <set>
using namespace std;

void printSet(multiset<int> m) {
    multiset<int> :: iterator it;
    for (it = m.begin(); it != m.end(); ++it ) {
        cout << *it << "\t";
    }
}

int main() {
    // declare multiset
    multiset<int> value;
    // insert value into set
    value.insert(10);
    value.insert(20);
    value.insert(30);
    value.insert(10);
    value.insert(20);
    value.insert(10);
    value.insert(20);
    // display element
    cout << endl << "total 10 occurence : " << value.count(10);
    cout << endl << "multiset => ";
    printSet(value);
    // remove 10 only one element from multiset
    value.erase(value.find(10));
    // display update value
    cout << endl << "update multiset => ";
    printSet(value);
    cout << endl << "total occurence of 20 : " << value.count(20);
    // remove all occurene of 20
    value.erase(20);
    // display updated element
    cout << endl << "after removing all occurence of 20 :";
    cout << endl << "updated multiset => ";
    printSet(value);
    return EXIT_SUCCESS;
}