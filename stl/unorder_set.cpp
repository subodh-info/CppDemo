#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    // declare the unordered_set
    unordered_set<string> languages;
    // insert value into unordered_set
    languages.insert("C++");
    languages.insert("Java");
    languages.insert("Python");
    languages.insert("Swift");
    languages.insert("Dart");
    languages.insert("Swift");
    // total number of elements present in unordered_list
    cout << endl << "size of unordered_list : " << languages.size();
    // display all elements from unordered_list
    for(auto element : languages){
        cout << endl << element;
    }
    // find "Dart" from the list
    // find() methods retur the end elements iterator if no specifie key is available in the list. otherwise it returns iterator of that elements.
    string key = "Dart";
    if(languages.find(key) == languages.end()){
        cout << endl << "Element \"Dart\" is not present in the list";
    }
    else {
        cout << endl << "Element \"Dart\" is present in the list";
    }

    return EXIT_SUCCESS;
}