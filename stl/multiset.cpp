#include <iostream>
#include <set>
using namespace std;

void printSet(multiset<int> m){
    multiset<int> :: iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        cout << *it << "\t";
    }
}
int main() {
    // declare multiset
    multiset<int> value;
    // inseration operation
    value.insert(40);
    value.insert(30);
    value.insert(20);
    value.insert(50);
    value.insert(40); // duplicate element
    value.insert(20); // duplicate element
    value.insert(30); // duplicate element
    // display elements
    multiset<int> :: iterator it;
    cout << endl << "multiset => " ;
    printSet(value);

    // remove a particular element 
    value.erase(50);
    // display updated value
    cout << endl << "updated multiset => ";
    printSet(value);
    // remove all element upto 40
    value.erase(value.begin(), value.find(30));
    // display updated multiset
    cout << endl << "updated multiset => ";
    printSet(value);
    return EXIT_SUCCESS;
}