#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3};
    cout << v1[1] << endl; // Output: 2

    cout << "Front" << v1.front() << endl; // Output: 1
    cout << "Back" << v1.back() << endl; // Output: 3

    v1.push_back(4);
    cout << "Size" << v1.size() << endl; // Output: 4
    cout << "Back" << v1.back() << endl; // Output: 4

    v1.pop_back();

    cout << "Empty" << boolalpha << v1.empty() << endl; // Output: 0
}