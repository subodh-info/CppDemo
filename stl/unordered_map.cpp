#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    // declare unordered_map
    unordered_map<string, string> student;
    // insert value into unordered map
    student["s"] = "subodh";
    student["a"] = "aabid";
    student["r"] = "rahul";
    student["a"] = "akash";
    student["z"] = "zeenat";
    // display the student list
    unordered_map<string, string> :: iterator itr;
    for ( itr = student.begin(); itr != student.end(); ++itr ) {
        cout << endl << (*itr).first << "\t" << (*itr).second;
    }
    // display number of student
    cout << endl << "total student : " << student.size();
    // insert element by using insert() method
    student.insert(pair<string, string> ("p", "praveen"));
    student.insert(make_pair("b", "bunty"));
    // display updated record
    cout << endl << "\nupdated student list ==>";
    for ( itr = student.begin(); itr != student.end(); ++itr) {
        cout << endl << (*itr).first << "\t" << (*itr).second;
    }
    cout << endl << "total number of record : " << student.size();

    // remove element wiht key = "s"
    student.erase("s");
    cout << endl << "\n after removing element \n student list";
    for ( itr = student.begin(); itr != student.end(); ++itr) {
        cout << endl << (*itr).first << "\t" << (*itr).second;
    }
    cout << endl << "total student ==> " << student.size();
    // use of find() method
    // if record is not found then find() method returns the pointer of last element
    // find name of student which key = "r"
    if(student.find("r") == student.end()) {
        cout << endl << "no, such studen found";
    }
    else {
        cout << endl << student.at("r");
    }
    return EXIT_SUCCESS;
}