#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main(){
    string text = "My name is subodh kumar. I am studing in a school. I used to go to college by scotter";
    regex pattern("\\b[Ss][a-zA-Z0-9]+");

    regex_token_iterator<string::iterator> start(text.begin(), text.end(), pattern, 0);
    regex_token_iterator<string::iterator> end;

    while(start != end){
        cout << *start << endl;
        start++;
    }

    return 0;
}