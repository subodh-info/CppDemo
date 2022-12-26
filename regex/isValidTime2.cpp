#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main(int argc, char *argv[]){
    //regex timePattern("([01][0-9]|2[0-3])(:[0-5][0-9]){2}");
    regex timePattern("([01][0-9]|2[0-3]):[0-5][0-9](:[0-5][0-9])?");

    for(int i = 1; i < argc; ++i){
        string arg(argv[i]);
        smatch m;
        
        if(regex_match(arg, m, timePattern)){
            cout << arg << " is valid time" << endl;
        }else{
            cout << arg << " is not valid time" << endl;
        }
    }

    return EXIT_SUCCESS; 
}