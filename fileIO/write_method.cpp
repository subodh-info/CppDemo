#include <iostream>
#include <fstream>
using namespace std;

class Employee{
    int emp_id;
    string emp_name;

    public:
    void putData();
};

void Employee :: putData(){
    int id;
    char name[30];
    Employee emp;
    ofstream fout("employee.bin");
    
    cout << "Enter your name : " << endl;
    cin.getline(name, 30);
    cout << "Enter your id : " << endl;
    cin >> id;    

    // assign value of data member
    emp.emp_id = id;
    emp.emp_name = name;

    // store data into file
    fout.write((char *)&emp, sizeof(emp));
}

int main(){
    Employee emp;
    emp.putData();
    return 0;
}