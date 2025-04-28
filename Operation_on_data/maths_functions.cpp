#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double weight = 7.7;
    double savings = -5000;

    cout << "Weight: " << floor(weight) << endl;
    cout << "Weight: " << ceil(weight) << endl;
    cout << "Weight: " << round(weight) << endl;
    cout << "Weight: " << abs(weight) << endl;
    cout << "Savings: " << abs(savings) << endl;
    cout << "Savings: " << pow(2, 4) << endl;
    cout << "Savings: " << sqrt(9) << endl;

    return 0;
}