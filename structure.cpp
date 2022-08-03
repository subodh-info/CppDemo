#include <iostream>
using namespace std;

struct student{
    private:
    int roll;
    string name;

    public:
    void setData(int roll, string name){
        this->roll = roll;
        this->name = name;
    }

    void display(){
        cout << "Roll : " << this->roll << endl;
        cout << "Name : " << this->name << endl;
    }
};

int main(){
    student st;
    st.setData(101, "subodh");
    st.display();
    return EXIT_SUCCESS;
}