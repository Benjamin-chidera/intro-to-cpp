#include <iostream>
using namespace std;

int main() {
    int num[] = {1,2,3,4,5,6};
    // int count = size(num); // this returns the number of elements in the array

    cout << sizeof(num) << endl; // this returns the size of the entire array

    cout << sizeof(num) / sizeof(0) << endl; // this returns the number of elements in the array
    // cout <<  count  << endl; // this returns the number of elements in the array

    return 0;
    
}