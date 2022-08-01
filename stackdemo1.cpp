#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> names;
    names.push("Subodh");
    names.push("Aabid");
    names.push("Komal");
    names.push("Rahul");

    // display elements from stack
    while(!names.empty()){
        cout << names.top() << endl;
        names.pop();
    }
    return EXIT_SUCCESS;
}