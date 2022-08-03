#include <iostream>
using namespace std;

template <class T, int size>
class StudentList{
    public:
    T arr[size];

    void insert(){
        for(int i=0; i < size; ++i){
            cout << "Enter name : " << endl;
            cin >> arr[i];
        }
    }

    void display(){
        for(auto list : arr){
            cout << list << endl;
        }
    }
};

int main(){
    StudentList<string, 5> student;
    student.insert();
    student.display();
    
    return 0;
}