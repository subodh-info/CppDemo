#include <iostream>
using namespace std;

class Student{
    int &_roll;

    public:
    Student(int roll) : _roll{roll} {}

    void print(){
        cout << "roll number :  " << this->_roll << endl;
    }
};

int main(){
    Student std(101);
    std.print();
    return 0;
}