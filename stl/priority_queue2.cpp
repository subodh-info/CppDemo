#include <iostream>
#include <queue>
using namespace std;

void showQueue(priority_queue<int> q){
    while(!q.empty()){
        cout << "\t" << q.top();
        q.pop();
    }
}
int main(){
    //declare priority_queue
    priority_queue<int> q1;
    priority_queue<int> q2;
    // push elements in first priority_queue
    q1.push(8);
    q1.push(7);
    q1.push(6);
    q1.push(5);
    // push elements in second priority_queue
    q2.push(11);
    q2.push(12);
    q2.push(13);
    q2.push(14);
    // swap first queue and second queue
    q1.swap(q2);
    // display first queue
    cout << endl << "priority_queue => 1 : " ;
    showQueue(q1);
    //display second queue
    cout << endl << "priority_queue => 2 : " ;
    showQueue(q2);   
    return EXIT_SUCCESS;
}