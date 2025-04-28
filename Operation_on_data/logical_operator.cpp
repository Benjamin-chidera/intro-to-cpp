#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    cout << ::boolalpha; // Output: true
    cout << "a < b: " << (a < b) << endl; // Output: true
    cout << "a > b: " << (a > b) << endl; // Output: false
    cout << "a <= b: " << (a <= b) << endl; // Output: true
    cout << "a >= b: " << (a >= b) << endl; // Output: false
    cout << "a == b: " << (a == b) << endl; // Output: false
    cout << "a != b: " << (a != b) << endl; // Output: true


    

    return 0;
}