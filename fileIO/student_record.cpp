/*  
    this program store the value of student into a text file.
*/
#include <iostream>
#include <fstream>
using namespace std;

class Student{
    int roll;
    string name;
    string course;

    public:
    void input(int roll, string name, string course){
        this->roll = roll;
        this->name = name;
        this->course = course;
    }

    void store(){
        ofstream fout("student.txt");

        if(fout.is_open()){
            fout << "Roll : " << this->roll << endl << "Name : " << this->name << endl << "Course : " << this->course << endl;
            fout.close();
        }
        else{
            cout << "there are some isssue to open file ! " << endl << "Please, try again" << endl;
        }
    }
};

int main(){
    Student student;
    student.input(101, "subodh" , "Information Technology");
    student.store();
    return 0;
}

