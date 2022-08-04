#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string line;
    ifstream filestream("test.txt");
    if(filestream.is_open()){
        while(getline(filestream, line)){
            cout << line << endl;
        }
        filestream.close();
    }
    else{
        cout << "File not found" << endl;
    }
    return EXIT_SUCCESS;
}