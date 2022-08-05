#include <iostream>
#include <deque>
using namespace std;

void showQuiz(deque<int> g){
    deque<int>::iterator it;
    for(it = g.begin(); it != g.end(); ++it){
        cout << "\t" << *it;
    }
    cout << endl;
}

int main(){
    deque<int> quiz;
    quiz.push_back(11);
    quiz.push_front(12);
    quiz.push_back(13);
    quiz.push_front(14);

    showQuiz(quiz);
    cout << "size of deque : " << quiz.size() << endl;
    cout << "At 3rd position : " << quiz.at(2) << endl;
    cout << "front : " << quiz.front() << endl;
    cout << "back : " << quiz.back() << endl;
    
    quiz.pop_front(); // remove element from front
    cout << "Now, front element : " << quiz.front() << endl;

    quiz.pop_back(); // remove element from back
    cout << "Now, back element : " << quiz.back() << endl;

    return 0;
}
