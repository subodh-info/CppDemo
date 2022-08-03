#include <iostream>
using namespace std;

class Student{
    char roll;

    public:
    Student(int r) : roll{r} {}

    void print(){
        cout << "roll : " << (int)this->roll << endl;
    } 
};

int main(){
    Student stud(301);
    stud.print();
    return 0;
}