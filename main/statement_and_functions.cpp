#include <iostream>
using namespace std;

int addNumbers(int a, int b);

int main() {

    // this is a simple addition statement
    int x = 10;
    int y = 20;

    int sum = x + y;

    cout << "The sum of " << x << " and " << y << " is " << sum << endl;

    // this program uses a function to add two numbers
    cout << "The sum of " << x << " and " << y << " using a function is " << addNumbers(x, y) << endl;

    return 0;
}

int addNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}