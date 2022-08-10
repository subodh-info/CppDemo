#include <iostream>
#include <map>
using namespace std;

int main(){
	// declare map
	map<string, string> student;
	// insert value in the map
	student["a"] = "akshay";
	student["c"] = "chandrashekhar";
	student["s"] = "suyash";
	student["d"] = "dheeraj";
	student["b"] = "bablu";
	student["z"] = "zeenat";
	// display the student list
	map<string, string> :: iterator it;
	for ( it = student.begin(); it != student.end(); ++it ) {
		cout << (*it).first << "\t" << (*it).second << endl;
	}
	cout << endl << "total number of records are " << student.size();
	// remove record which key = "z"
	student.erase("z");
	
	cout << "\n\nupdated list of student ==> \n";
	for ( it = student.begin(); it != student.end(); ++it ) {
		cout << (*it).first << "\t" << (*it).second << endl;
	}
	cout << endl << "total number of record : " << student.size();
	// remove all record from map
	student.clear();
	// display updated record
	for ( it = student.begin(); it != student.end(); ++it ) {
		cout << (*it).first << "\t" << (*it).second << endl;
	}
	cout << endl << "after deleting whole record =====> \n total available records : " << student.size();
	return EXIT_SUCCESS;
}