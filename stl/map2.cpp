#include <iostream>
#include <map>
using namespace std;

void showMap(map<int, string> m){
    map<int, string> :: iterator it;
    for ( it = m.begin(); it != m.end(); ++it ){
        cout << endl << (*it).first << "=====" << (*it).second;
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

    // declare and initialize another map
    map<int, string> student2(student.begin(), student.end());
    
    // display list of first student
    cout << endl << "Roll and name of student => 1";
    showMap(student);
    // display list of second student's record
    cout << endl << "\nRoll and name of student => 2";
    showMap(student2);
    cout << endl << "total number of student => " << student.size();


    return 0;
}