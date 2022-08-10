#include <iostream>
using namespace std;

class Add {
    int initial_sum;

    public:
    // constructor to initialize initial value
    Add(int num) {
        this->initial_sum = num;
    }

    // overload operator ()
    int operator() (int num) {
        this->initial_sum = this->initial_sum + num;
        return this->initial_sum;
    }
};

int main() {
    // create object of Add class 
    // initialize with number 12 of initial_sum variable
    Add add(12);
    // call the object as function with passing number 12 as argument
    int result = add(12);
    cout << endl << "Result : " << result;
    return EXIT_SUCCESS;
}