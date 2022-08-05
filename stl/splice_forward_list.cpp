#include <iostream>
#include <forward_list>
using namespace std;

void showList(forward_list<int> flist){
    forward_list<int> :: iterator itr;
    for ( itr = flist.begin(); itr != flist.end(); ++itr){
        cout << "\t" << *itr;
    }
}

int main(){
    // declare and initialize forward_list
    forward_list<int> flist1 = {1, 2, 3};
    // declare and initialize another forward_list
    forward_list<int> flist2 = {10, 20, 30};
    // show elements of forward_list -1
    cout << endl << "forward_list => 1 : " ;
    showList(flist1);
    // show elements of forward_list -2
    cout << endl << "forward_list => 2 : ";
    showList(flist2);
    // use of splice_after() method
    flist1. splice_after(flist1.begin(), flist2);
    // show update forward_list => 1
    cout << endl << "updated forward_list => 1 : " ;
    showList(flist1); // {1, 10, 2, 30, 2, 3}
    // show updated forward_list -2
    cout << endl << "updated forward_list => 2 : ";
    showList(flist2); // no any element is present in this list
    return 0;
}