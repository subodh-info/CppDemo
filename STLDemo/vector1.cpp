#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> names;
    names.push_back("subodh");
    names.push_back("manish");
    names.push_back("nirbhay");

    cout << "size of vector : " << names.size() << endl;
    cout << "Capacity of vector : " << names.capacity() << endl;
    cout << "Elements available in vector ----> " << endl;
    for(vector<string>::iterator itr = names.begin(); itr != names.end(); ++itr){
        cout << *itr << endl;
    }

    // check vector is empty or not
    if(names.empty()){
        cout << "vector is empty. " << endl;
    }
    else{
        cout << "vector is not empty. " << endl;
    }
    names.push_back("Prakash");
    names.push_back("arun");
    names.push_back("ajay");
    names.push_back("amit");
    
    cout << "at position 4 " << names.at(3) << " is available" << endl;
    cout << "front element => " << names.front() << endl;
    return 0;
}