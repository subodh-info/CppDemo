#include <iostream>
#include <list>
using namespace std;

void showList(list<int> l){
    list<int>::iterator it;
    for(it = l.begin(); it != l.end(); ++it){
        cout << "\t" << *it;
    }
}

int main(){
    list<int> l1;
    l1.emplace_front(11);
    l1.emplace_back(9);
    l1.emplace_front(12);
    l1.emplace_back(7);
    showList(l1);

    list<int> l2 = {91, 92, 93, 94, 95};
    l1.merge(l2);
    cout << endl << "After merging list-2 with list-1";
    cout << endl;
    showList(l1);

    // remove elements at condition
    l1.remove_if([](int x) { return x % 2 != 0; });
    cout << endl << "after removing elements ==> " << endl;
    showList(l1);
    return 0;
}