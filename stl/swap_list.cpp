#include <iostream>
#include <list>
using namespace std;

int main(){
    list<string> l1 = {"subodh","rahul","aman", "priyanka", "manisha", "katherine"};
    list<string> l2 = {"prineeti", "deepika", "shilpa", "anushka", "sameera", "madhu", "puja"};
    // show elements present in list-1
    cout << endl << "list -> 1 : " ;
    for(auto elements : l1){
        cout << "\t" << elements;
    }    
    // show elements of list-2
    cout << endl << "list -> 2 : " ;
    for(auto elements : l2){
        cout << "\t" << elements;
    }
    // swap() to swap elements of list-1 and list-2
    l1.swap(l2);
    //now, show elements present in list-1
    cout << endl << "List -> 1 : " ;
    for(string element : l1){
        cout << "\t" << element;
    }
    // now, show the elements of list-2
    cout << endl << "list -> 2 : " ;
    for(string element : l2){
        cout << "\t" << element;
    }
    cout << endl;
    return EXIT_SUCCESS;
}