#include <iostream>
using namespace std;

int main() {
    bool a = true, b = false, c = true;

    cout << ::boolalpha; // To display true and false as true and false
    // Using AND operator
    cout << "Using AND operator: " << (a && b) << endl; // Output: 0
    cout << "Using AND operator: " << (a && c) << endl; // Output: 1
    cout << "Using AND operator: " << (b && c) << endl; // Output: 0

    // Using OR operator
    cout << "Using OR operator: " << (a || b) << endl; // Output: 1
    cout << "Using OR operator: " << (a || c) << endl; // Output: 1
    cout << "Using OR operator: " << (b || c) << endl; // Output: 1

    // Using NOT operator
    cout << "Using NOT operator: " << (!a) << endl; // Output: 0
    cout << "Using NOT operator: " << (!b) << endl; // Output: 1
    cout << "Using NOT operator: " << (!c) << endl; // Output: 0

    return 0;
}