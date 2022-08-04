#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream filestream("test.txt");
    if(filestream.is_open()){
        filestream << "Welcome to C++ computer programming\n";
        filestream << "file handling example with C++\n";
        filestream.close();
    }
    else{
        cout << "there are some problem to open file...";
    }
    return EXIT_SUCCESS;
}