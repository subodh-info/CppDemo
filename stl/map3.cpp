#include <iostream>
#include <map>
using namespace std;

int main(){
	// map stores the value in default order based on the key.
	// declare map
	map<int, string> employee;
	// insert value in map
	employee[107] = "Subodh";
	employee[101] = "Shradul";
	employee[102] = "Suyash";
	employee[103] = "Radhika";
	employee[104] = "Akshata";
	employee[105] = "Komal";
	employee[106] = "swapnil";
	// display all elements present in the list
	map<int, string> :: iterator it;
	for ( it = employee.begin(); it != employee.end(); ++it){
		cout << (*it).first << "\t" << (*it).second << endl;
	}
	// if we try to insert value in map with duplicate key, then the value of that key is updated with new value.
	employee[107] = "rahul"; // insert duplicate value
	// now, display the updated list
	cout << endl << "\nUpdate list of employee ==> \n" ;
	for ( it = employee.begin(); it != employee.end(); ++it) {
		cout << (*it).first << "\t" << (*it).second << endl;
	}
	return EXIT_SUCCESS;
}