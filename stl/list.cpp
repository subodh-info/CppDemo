#include <iostream>
#include<list>
using namespace std;

void showList(list<int> l){
    list<int>::iterator it;
    for(it = l.begin(); it != l.end(); ++it){
        cout << "\t" << *it;
    }
}

int main(){
    list<int> l1 = {1, 3, 5, 7, 9, 11, 13, 1, 15, 3, 17, 5, 19};
    list<int> l2 = {2, 4, 6, 8, 10, 12, 2, 14, 4, 16, 6, 18, 8, 20};

    cout << "element present in list -> 1" << endl;
    showList(l1);
    cout << endl << endl;
    cout << "element present in the list -> 2" << endl;
    showList(l2);

    // operation on first list
    cout << endl;
    cout << "front element : " << l1.front() << endl;
    cout << "back elemenet : " << l1.back() << endl;
    cout << "element after removing front element ===> " << endl;
    l1.pop_front();
    showList(l1);
    cout << endl;
    cout << "elements after removing back element ====> " << endl;
    l1.pop_back();
    showList(l1);

    cout << endl << "elements after reverse the list -1 ====> ";
    l1.reverse();
    showList(l1);

    cout << endl << "elements after sorint list - 1 =====> " ;
    l1.sort();
    showList(l1);
    return 0;
}