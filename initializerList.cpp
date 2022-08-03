#include <iostream>
using namespace std;

class Points{
    int x;
    int y;

    public:
    Points(int i, int j) :x(i), y(j){}

    int getX() { return this->x;}
    int getY() { return this->y;}
};

int main(){
    Points point(11, 9);
    cout << "value of x : " << point.getX() << endl << "value of y : " << point.getY() << endl;
    return 0;
}