#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int *p = &x;

    cout << "Address of x: " << &x << endl;
    cout << "Value of x: " << x << endl;
    cout << "Address stored in p: " << p << endl;
    cout << "Value stored in p: " << *p << endl;
    cout << ::boolalpha;

    bool check = x == *p;
    cout << check << endl; // true


    return 0;
}