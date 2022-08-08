#include <iostream>
#include <map>
using namespace std;

void showMap(map<int, string> m){
    cout << "\n\t Key \t Value\n";
    cout << "===================================\n";
    map<int, string> :: iterator it;
    for ( it = m.begin(); it != m.end(); ++it ){
        // cout << endl << (*it).first << "=====" << (*it).second;
        cout << "\t" << (*it).first << "\t" << (*it).second << "\n";
    }
}
int main(){
    // declare map
    map<int, string> student;
    // insert element into map.
    student[101] = "subodh";
    student[102] = "rahul";
    student[103] = "shyam";
    // another way to insert element into map
    student.insert(pair<int, string>(104, "komal"));
    student.insert(pair<int, string>(105, "amrita"));
    student.insert(pair<int, string>(106, "Ankush"));
    student.insert(pair<int, string> (107, "atul"));
    student.insert(pair<int, string> (108, "ankit"));

    // declare and initialize another map
    map<int, string> student2(student.begin(), student.end());
    
    // display list of first student
    cout << endl << "Roll and name of student => 1\n";
    showMap(student);
    // display list of second student's record
    cout << endl << "\nRoll and name of student => 2\n";
    showMap(student2);
    // remove element which key = 103
    student.erase(103);
    // now, display student list
    showMap(student);
    // remove all element upto element which key less than 105
    student.erase(student.begin(), student.find(105));
    // now, display the list of elements
    showMap(student);
    return 0;
}