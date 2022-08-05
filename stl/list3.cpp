#include <iostream>
#include <list>
using namespace std;

void showList(list<int> l){
    for(auto element : l){
        cout << "\t" << element;
    }
}

int main(){
    list<int> l1 = {1, 3, 5, 7, 9, 11, 1, 13, 3, 15, 5, 17, 7, 19, 9};
    cout << endl << "element of list before removing duplicate elements ===> " << endl;
    showList(l1);
    l1.sort(); // sort elements to remove duplicate elements from list
    l1.unique();
    cout << endl << "element of list after using unique() method ==" << endl;
    showList(l1);

    list<int> l2 = {91, 92, 93}; // create and initialize second list

    // initialize iterator for list -1
    list<int>::iterator it = l1.begin();

    //using advance() to increment iterator position
    advance(it, 3); // now, iterator position at index 3.
    // splice() method to insert all elements of list-2 into list-1 at specified position
    l1.splice(it, l2);
    // show the elements of list - 1
    cout << endl << "elements of list - 1 " << endl;
    showList(l1);
    // show elements of list - 2
    cout << endl << "element of list - 2" << endl;
    showList(l2); // no any elements available, because, all elemets are splice into list-1.

    return 0;
}