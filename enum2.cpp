#include <iostream>
using namespace std;

enum color{red=5, black};
enum suit{heart, diamond=3, spade=8, club};

int main(){
    cout << "value of red color " << red << endl << "value of black color : " << black << endl;
    cout << "hear : " << heart << endl << "diamond :" << diamond << endl << "spade : " << spade << endl << "club : " << club << endl;
    return 0;
}