#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {1, 3, 5, 8, 10, 13, 15};

    int even_cout = count_if(nums.begin(), nums.end(), [](int num){
        return num % 2 == 0;
    });

    cout << "total even numbers present in the vector : " << even_cout << endl;
    return 0;
}