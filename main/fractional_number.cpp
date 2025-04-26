#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float num1 = 1.5;
    double num2 = 2.5;
    long double num3 = 3.5;

    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;


    cout << "Size of num1" << sizeof(num1) << endl;
    cout << "Size of num2" << sizeof(num2) << endl;
    cout << "Size of num3" << sizeof(num3) << endl;

    return 0;


}