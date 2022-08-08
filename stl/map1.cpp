#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, string> employee;
    employee[101] = "Priyanka";
    employee[102] = "Sushmita";
    employee[103] = "Katherine";
    employee[104] = "Anjelina";
    employee[105] = "Jennifier";
    cout << endl << "total number of employee => " << employee.size();
    cout << endl << "maximum number of employe => " << employee.max_size();
    //display employee record
    map<int,string>::iterator it;
    for ( it = employee.begin(); it != employee.end(); ++it){
        cout << endl << (*it).first << "<==========>" << (*it).second;
    }
    cout << endl << endl;
    map<int, string> :: reverse_iterator r_it;
    cout << endl << "display employee list in reverse order => ";
    for ( r_it = employee.rbegin(); r_it != employee.rend(); ++r_it){
        cout << endl << (*r_it).first << " ========= " << (*r_it).second;
    }
    return EXIT_SUCCESS;
}