#include <iostream>
#include <regex>

using namespace std;

int main() {
    string s{"geeksofrgeeks"};
    regex r{"(geek)(.*)"};

    smatch m;

    if(regex_search(s, m, r)) {
        cout << endl << "Match size : " << m.size();
        cout << endl << "Whole match : " << m.str(0);
        cout << endl << "first matching group : " << m.str(1);
        cout << endl << "first matching group at index : " << m.position(1);
        cout << endl << "\n";
    }
    return EXIT_SUCCESS;
}