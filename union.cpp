#include <iostream>
using namespace std;

union person{
    int roll;
    string name;
};

int main(){
    union person st;
    st.roll = 101;
    cout << "Roll : " << st.roll << endl;
    return EXIT_SUCCESS;
}