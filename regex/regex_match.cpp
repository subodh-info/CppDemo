#include <iostream>
#include <regex>

using namespace std;

int main(){
    string str = "geeksforGeeks";
    regex b("(geeks)(.*)");

    if(regex_match(str, b)){
        cout << endl << "string matches with regular expression";
    } else {
        cout << endl << "String does not match with regular expression";
    }

    if(regex_match(str.begin(), str.end(), b)) {
        cout << endl << "string from index 0 to end mathes with regular expression";
    } else {
        cout << endl << "string does not match with reguar expression";
    }
    return EXIT_SUCCESS;
}