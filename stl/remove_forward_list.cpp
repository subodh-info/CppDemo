#include <iostream>
#include <forward_list>
using namespace std;

void showList(forward_list<int> flist){
    forward_list<int> :: iterator itr;
    for ( itr = flist.begin(); itr != flist.end(); ++itr ) {
        cout << "\t" << *itr;
    }
}

int main(){
    // declare and initialize forward_list
    forward_list<int> flist = {10, 20, 30, 12, 15, 35, 40, 36, 45, 47, 39, 33};
    // show the element present in the forward list
    cout << endl << "elements of forware list ===> " ;
    showList(flist); // {10, 20, 30, 12, 15, 35, 40, 36, 45, 47, 39, 33}
    // remove 40 from list
    flist.remove(40);
    cout << endl << "update list ====> " ;
    showList(flist);
    // remove all element which are gretter than 35
    flist.remove_if ( [] (int x) { return x >35; } );
    // show the elements
    cout << endl << "update list ====> " ;
    showList(flist);
    return 0;
}