#include <iostream>
using namespace std;

class Greet {
    public:
    void operator() () {
        cout << endl << "hello word ! welcome to functor concept of c++";
    }
};

int main() {
    Greet greet;
    greet();
    return EXIT_SUCCESS;
}