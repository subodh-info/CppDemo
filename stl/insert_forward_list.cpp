#include <iostream>
#include <forward_list>
using namespace std;

void showForwardList(forward_list<int> flist){
    forward_list<int> :: iterator itr;
    for(itr = flist.begin(); itr != flist.end(); ++itr){
        cout << "\t" << *itr;
    }
}

int main(){
    // declare and initialize forward_list
    forward_list<int> flist = {1, 2, 3}; 
    cout << endl << "forward_list => 2 : " ;
    showForwardList(flist);

    // insert element from flist.begin();
    cout << endl << "after using insert_after() method ==> " ;
    flist.insert_after(flist.begin(), {10, 20, 30}); 
    // show the elements of forward_list
    showForwardList(flist); // {1, 10, 20, 30, 2, 3}
    // declare iterator 
    forward_list<int> :: iterator ptr;
    ptr = flist.begin();
    ++ptr; // increase the iterator by 1
    // insert element using emplace_after()
    flist.emplace_after(ptr, 96);
    // now, show the element of forware_list
    cout << endl << "update forward list ==> " ;
    showForwardList(flist);
    return EXIT_SUCCESS;
}