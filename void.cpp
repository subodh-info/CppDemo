#include <iostream>
using namespace std;
void fun(int n){
    cout << endl << "value of n : " << n;
}

int main(){
    // int *num = new int(10);
    int num = 10;
    void *ptr = &num;

    //cout << endl << "value of num : " << *ptr; // at this line we will get error because, void pointer can not be dereferenced.
    cout << endl << "value of num : " << *(int*)ptr;
    // function pointer
    //void (*fun_ptr)(int) = fun;
    void (*fun_ptr)(int);
    fun_ptr = fun;
    // ptr = fun_ptr; // here, we will get error. because, void pointer can not contain the address of function pointer.
    ptr = (void*)fun_ptr;

    const int a = 12;
    //ptr = &a; // here, we will get error. because, void pointer can not contain the address of any constant variable.

    const int *b = new int(13);
    ptr = (void*)b;

    volatile int c = 13;
    //ptr = &c; // here, we will also get the error. because, the address of volatile variable can not contained by void pointer.
    ptr = (void*)&c;

    return EXIT_SUCCESS;
}