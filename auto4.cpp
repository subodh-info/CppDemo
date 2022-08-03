#include <iostream>
using namespace std;

int main(){
    string names[] = {"akshay", "ajay", "amit", "atul", "aman", "anmol", "abhay", "ankit", "anuup"};
    for(auto name: names){
        cout << name << endl;
    }
    return EXIT_SUCCESS;
}