#include <iostream>
#include <map>
using namespace std;

void showMap(multimap<string, string> record){
    multimap<string, string> :: iterator it;
    cout << "\n\tKEY-------------------------Value\n";
    cout << "=====================================================================\n";
    for ( it = record.begin(); it != record.end(); ++it){
        cout << "\t" << (*it).first << "-------------------------" << (*it).second << "\n";
    }
}

int main(){
    // declare and initialize map
    multimap<string, string> record = {
        {"india", "Aishwarya Rai"},
        {"india", "Sushmita sen"},
        {"united state", "Jennifier lawrence"},
        {"austerila", "katherine langford"},
        {"united kingdom", "Emma Waston"},
        {"rusia", "Milla jovavich"},
        {"china", "Fan Bingbing"}
    };
    // display the total record present in the map
    cout << endl << "total number of record : " << record.size();
    // find the total capacity to store the record in map
    cout << endl << "maximum capacity to store record : " << record.max_size();
    // another way to declare and initialize the map
    record.insert(pair<string, string> ("japan", "kasumi arimura"));
    record.insert(pair<string, string> ("koria", "kim tae hee"));
    // declare and initialize one map with another map
    multimap<string, string> record2(record.begin(), record.end());
    // show list of first record
    cout << "\n Record of first multimap => \n";
    showMap(record);
    // now, display list of second record
    cout << "\n\n Record of second multimap => \n";
    showMap(record2); 
    // remove element from first record which key = "china"
    record.erase("china");
    // display update record
    cout << endl << "Now, show the update record of first record => \n";
    showMap(record);
    // remove all record from second record up to element which key less than "rusia"
    record2.erase(record2.begin(), record2.find("rusia"));
    // display update record from record 2
    cout << "\n After removing elements from record 2 => \n";
    showMap(record2);
    return EXIT_SUCCESS;
}