#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "H ";

    cout << ::boolalpha;

    cout << "Is Alphanumeric: " << isalnum(str[0]) << endl;

    return 0;
}
