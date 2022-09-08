#include <iostream>
#include <regex>

using namespace std;

int main() {
    string a = "geeksforgeeks";
    // b is an object of regular expresison
    regex b("(geek)(.*)"); // here, geek followed by any character.

    // regex_match() function matches string a against b
    if(regex_match(a, b)) {
        cout << endl << "string \'a\' matches regular expression \'b\'";
    } else {
        cout << endl << "string \'a\' does not match regular expression '\b\'";
    }

    // here, regex_match() method for matching string in range against regular expression b
    if(regex_match(a.begin(), a.end(), b)) {
        cout << endl << "\nstring \'a\' matches with the regular expression b\n in the range from 0 to string end";
    }
    return EXIT_SUCCESS;
}