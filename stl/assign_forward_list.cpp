#include <iostream>
#include <forward_list>
using namespace std;

int main(){
    forward_list<int> flist1; // declare forward_list
    forward_list<int> flist2; // declare another forward_list
    forward_list<int> flist3; // declare another forward_list

    // assign the elements to forward list
    flist1.assign({1, 2, 3});
    flist2.assign(5, 10); // store only 10 as element, 5 times
    flist3.assign(flist1.begin(), flist1.end()); // {1, 2, 3}
    // show the elements of forward_list-1
    cout << endl << "forward_list -> 1 : " ;
    for(auto element : flist1){
        cout << "\t" << element;
    }
    cout << endl;
    // show elements of forward_list-2
    cout << endl << "forward_list -> 2 : " ;
    for(auto element : flist2){
        cout << "\t" << element;
    }
    cout << endl;
    // show elements of forward_list-3
    cout << endl << "forward_list -> 3 : " ;
    for(auto element : flist3){
        cout << "\t" << element;
    }
    cout << endl;

    return EXIT_SUCCESS;
}