#include <iostream>
#include <set>
using namespace std;

void showSet(set<int> s){
    set<int> :: iterator it;
    for(it = s.begin(); it != s.end(); ++it) {
        cout << "\t" << *it;
    }
}

int main(){
    // declare and initialize set
    set<int> s1 = {12, 14, 16, 18, 14, 11, 12, 13};
    cout << endl << "elements present in the set ===> " ;
    showSet(s1);
    cout << endl << "size of set : " << s1.size();
    cout << endl << "max size of set : " << s1.max_size();
    cout << endl << "first elements of size : " << *s1.begin();
    cout << endl << "last elements of set : " << *s1.end();
    // insert an elements 
    s1.insert(23);
    s1.insert(9);
    cout << endl << "update set => ";
    showSet(s1);

    // declare and initialize another set using first set
    set<int> s2(s1.begin(), s1.end());
    set<int> s3(s1); // here, default copy constructor is called
    cout << endl << "set => 2 : " ;
    showSet(s2);
    cout << endl << "set => 3 : " ;
    showSet(s3);
    cout << endl << "find elements : " << *s1.find(16);
    cout << endl << "find elements from set => 2 : " << *s2.find(25);
    //declare and initialize set by using copy constructor
    set<int> s4 = s2; // here, default copy constructor is called.
    cout << endl << "set => 4 : " ;
    showSet(s4);

    return 0;
}