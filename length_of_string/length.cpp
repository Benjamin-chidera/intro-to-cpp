#include <iostream>
#include <string>
using namespace std;

int main() {
    char msg1 [] = "Hello World";
    string msg2 = "Hello World";

    cout << "Length of char array: " << strlen(msg1) << endl;
    cout << "Length of string: " << msg2.length() << endl;

    return 0;
}