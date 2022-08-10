#include <iostream>
#include <map>
using namespace std;

int main() {
	// declare map
	multimap<int, string> employee;
	// insert value into the map
	employee.insert(pair<int, string> (105, "subodh"));
	employee.insert(pair<int, string> (104, "swapnil"));
	employee.insert(pair<int, string> (103, "anmol"));
	employee.insert(pair<int, string> (104, "radhika"));
	employee.insert(pair<int, string> (102, "subodh"));
	employee.insert(pair<int, string> (101, "vijay"));
	// display employee list
	cout << endl << "employee list ===> \n";
	multimap<int, string> :: iterator itr;
	for ( itr = employee.begin(); itr != employee.end(); ++itr ) {
		cout << (*itr).first << "\t" << (*itr).second << endl;
	}
	cout << endl << "total employee : " << employee.size();
	
	
	return EXIT_SUCCESS;
}