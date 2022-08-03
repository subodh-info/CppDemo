#include <iostream>
using namespace std;

class Student{
    public:
    const string college;

    // Student(){
    //     this->college = "Gaya college, Gaya";
    // }

    Student(string college) : college{college} {}

    void print(){
        cout << "College name : " << this->college << endl;
    }
};

int main(){
    Student student("Gaya college, Gaya");
    student.print();
    return 0;
}