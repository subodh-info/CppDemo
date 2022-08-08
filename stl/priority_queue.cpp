#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> q1;
    q1.push(13);
    q1.push(11);
    q1.push(8);
    q1.push(23);
    q1.push(25);

    // total number of elements present in the priority queue
    cout << endl << "size of Queue ==> " << q1.size();
    // display the elements of priority queue
    cout << endl << "Queue => : " ;
   while(!q1.empty()){
    cout << "\t" << q1.top();
    q1.pop();
   }

    return 0;
}