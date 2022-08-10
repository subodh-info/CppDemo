#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class student {
    int roll;
    string name;
    
    public:
    student(int roll, string name) {
        this->roll = roll;
        this->name = name;
    }

    int getRoll() {
        return this->roll;
    }

    string getName() {
        return this->name;
    }
};

bool sortByRoll(student o1, student o2) {
    return o1.getRoll() < o2.getRoll();
}

bool sortByName(student o1, student o2) {
    return o1.getName() < o2.getName();
}

int main() {
    vector<student> std;
    student s1(103, "subodh");
    student s2(104, "ankit");
    student s3(101, "shreya");
    student s4(102, "radhika");
    std.push_back(s1);
    std.push_back(s2);
    std.push_back(s3);
    std.push_back(s4);

    //display elements
    vector<student> ::iterator itr;
    for(itr = std.begin(); itr != std.end(); ++itr) {
        cout << endl << "roll : " << itr->getRoll() << "\t name : " << itr->getName(); 
    }
    // sort by student roll number
    sort(std.begin(), std.end(), sortByRoll);
    cout << endl << "\nstudent list in ascending order by roll number => ";
    for(itr = std.begin(); itr != std.end(); ++itr) {
        cout << endl << "roll : " << itr->getRoll() << "\t name : " << itr->getName(); 
    }

    // sort by student name
    sort(std.begin(), std.end(), sortByName);
    cout << endl << "\nstudent list in ascending order by name ==> ";
    for(itr = std.begin(); itr != std.end(); ++itr) {
        cout << endl << "roll : " << itr->getRoll() << "\t name : " << itr->getName(); 
    }
    return EXIT_SUCCESS;
}