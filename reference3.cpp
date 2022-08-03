#include <iostream>
using namespace std;

struct student{
    int roll;
    string name;
    string course;
};

void printStudentDetails(student &st){
    cout << "Roll : " << st.roll << "Name : " << st.name << endl << "Course : " << st.course << endl;
}
int main(){
    struct student stud;
    stud.roll = 101;
    stud.name = "Nitin Mukesh";
    stud.course = "Bachelor of science in Information Technology";
    return 0;
}