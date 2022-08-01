#include <iostream>
#include <stack>
using namespace std;

int main(){
    string candidateString = "welcome";
    stack<char> storeChar;

    for(int i=0; i < candidateString.length(); i++){
        storeChar.push(candidateString[i]);
    }
    candidateString = "";
    // now reverse string
    while(!storeChar.empty()){
        candidateString = candidateString + storeChar.top();
        storeChar.pop();
    }

    //display output
    cout << "Reverse String : " << candidateString << endl;
    return EXIT_SUCCESS;
}