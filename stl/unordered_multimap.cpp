#include <iostream>
#include <unordered_map>
using namespace std;

void print(unordered_multimap<int, string> umap) {
    unordered_map<int, string> :: iterator it;
    for(it = umap.begin(); it != umap.end(); ++it) {
        cout << endl << it->first << "\t" << it->second;
    }
}
int main() {
    // declare uordered multi map
    unordered_multimap<int, string> emp;
    // inser element
    emp.insert(make_pair(101, "praveen babi"));
    emp.insert(make_pair(102, "zeenat aman"));
    emp.insert(make_pair(105,"priyanka chopra"));
    emp.insert(make_pair(103,"katherine langford"));
    emp.insert(make_pair(102, "jennifier lawrance"));
    emp.insert(make_pair(104, "Emma watson"));
    emp.insert(make_pair(103, "nora fatehi"));
    // display list of employee
    cout << endl << "list of employee ===> ";
    print(emp);
    cout << endl << "total employee : " << emp.size();
    cout << endl << "total number of employee which key => 102 : " << emp.count(102);
    cout << endl << "total number of emplyoee which key => 103 : " << emp.count(103);
    return EXIT_SUCCESS;
}