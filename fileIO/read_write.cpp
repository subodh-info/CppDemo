#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream os;
    char data[40];
    os.open("text.txt");
    if(os.is_open()){
        cout << "Enter you name : " << endl;
        cin >> data;
        // write content to file
        os << "Name : " << data << endl;

        cout << "Enter course name : " << endl; // take input from keyword
        cin >> data;
        os << "Course : " << data << endl; // write content to file

        os.close(); // close the output stream
    }
    else{
        cout << "there are some issue to open file " << endl;
    }

    // read file
    ifstream is;
    is.open("text.txt");

    if(is.is_open()){
        string line;
        while(getline(is, line)){
            cout << line << endl;
        }
        is.close();
    }
    else{
        cout << "file not found !" << endl;
    }
    
    return EXIT_SUCCESS;
}