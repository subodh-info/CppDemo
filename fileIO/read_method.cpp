#include <iostream>
#include <fstream>
using namespace std;

class Employee{
    int emp_id;
    string emp_name;

    public:
    void getData();
};

void Employee :: getData(){
    cout << "Employee ID : " << emp_id << "\n";
    cout << "Employee Name :  " << emp_name << "\n";
}

int main(){
    ifstream fin;
    fin.open("employee.bin", ios::in);
    Employee emp;

    // read data from file
    fin.read((char *)&emp, sizeof(emp));
    emp.getData();
    return 0;
}