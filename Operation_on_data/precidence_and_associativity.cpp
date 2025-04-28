#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5, c = 2, d = 7, e = 3, f = 4, g = 1;

    // Precedence and Associativity

    int result = a + b * c - d / e - f + g;

    cout << "Result: " << result << endl;

    return 0;
}