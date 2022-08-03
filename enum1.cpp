#include <iostream>
using namespace std;

enum weeks{MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};

int main(){
    weeks day;
    day = FRIDAY;
    cout << "day number of friday : " << day + 1 << endl;

    if(day == FRIDAY){
        cout << "today is friday. " << endl;
    }
    else{
        cout << "today is not friday" << endl;
    }
    
    return 0;
}