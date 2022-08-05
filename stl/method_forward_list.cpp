#include <iostream>
#include <forward_list>
using namespace std;

int main(){
    //declare forward_list
    forward_list<int> list1;
    // insert element to forwared_list
    list1.emplace_front(11);
    list1.emplace_front(13);
    list1.emplace_front(15);
    list1.emplace_front(17);
    // display elements of forwared_list
    cout << endl << "forware_list -> 1 : ";
    for(int element : list1){
        cout << "\t" << element;
    }
    cout << endl;
    // remove first element from forwared_list
    list1.pop_front();
    // now, show the elements form list
    cout << endl << "forward list -> 1 : " ;
    for(int element : list1){
        cout << "\t" << element;
    }
    
    return EXIT_SUCCESS;
}