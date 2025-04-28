#include <iostream>
using namespace std;

int main(){
    //  case1: dangling pointer
    /*
    int *p;

    // cout <<  ::end;
    cout << "case 1: Uninitialized pointer: " << :: endl;
    cout << "p: " << p << endl;
    cout << "p points to: " << *p << endl; // undefined behavior
    */

   cout << "case 2: Dangling pointer: " << endl;
   int *p = new int(67);
   cout << "p: " << p << endl;
   cout << "p points to: " << *p << endl; // 67
   delete p;

   cout << "p: " << p << endl; // dangling pointer
   cout << "p points to: " << *p << endl; // undefined behavior

    return 0;
    }