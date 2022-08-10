#include <iostream>
#include <utility>
#include <tuple>

using namespace std;

int main() {
    int roll; 
    string name;
    pair<int, string> student;
    student.first = 201;
    student.second = "subodh";
    
    pair<int, string> pair2;
    pair2 = make_pair(101, "rahul");

    cout << endl << "value of pair => 1 :";
    cout << endl << "first : " << student.first << "\nsecond : " << student.second << "\n";

    cout << endl << "value of pair => 2 : "; 
    cout << endl << "fisrt : " << pair2.first << "\nsecond : " << pair2.second << "\n";

    // swap the element
    student.swap(pair2);
    cout << endl << "value of pair => 1 :";
    cout << endl << "first : " << student.first << "\nsecond : " << student.second << "\n";

    cout << endl << "value of pair => 2 : "; 
    cout << endl << "fisrt : " << pair2.first << "\nsecond : " << pair2.second << "\n";

    // unpack the pair
    tie(roll, name) = student;
    cout << endl << "roll : " << roll << endl << "name : " << name; 
    return EXIT_SUCCESS;
}