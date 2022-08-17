#include <iostream>

using namespace std;

class Singleton {
    // create private and static data member 
    // so that it can not be access from outside directly.
   static Singleton *instance;
   // create constructor as private so that it object can not be created with the help of 'new' keyword.
   Singleton(){}

   public:
   // this factory method is private to create new object is object does not exist. otherwise it return created object.
   static Singleton *getSingleton() {
    if(!instance) {
        instance = new Singleton;
    }

    return instance;
   }
};

// initialize pointer to zero so that it can be initialize in first call to getSingleton() 
Singleton *Singleton::instance = 0;

int main() {
    Singleton *obj1 = obj1->getSingleton();
    Singleton *obj2 = obj2->getSingleton();

    cout << endl << "Object => 1 " << obj1;
    cout << endl << "object => 2 " << obj2;
    if( obj1 == obj2 ) {
        cout << endl << "Both objects are same. " ;
    }
    else {
        cout << endl << "Both objects are not same";
    }

    return EXIT_SUCCESS;
}
