#include <iostream>
using namespace std;

class add {
    public:
    int operator() (int a, int b) {
        return a + b;
    }
};

int main() {
    add ad;
    int result = ad(12, 15);
    cout << endl << "Result : " << result;
    return EXIT_SUCCESS;
}