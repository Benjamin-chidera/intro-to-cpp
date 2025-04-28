#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello World";
    string str2 = "HELLO WORLD";
    string str3 = "hello world";

    cout << "str1 is upper case: " << boolalpha << isupper(str1[0]) << endl;
    cout << "str2 is upper case: " << boolalpha << isupper(str2[0]) << endl;
    cout << "str3 is upper case: " << boolalpha << isupper(str3[0]) << endl;

    cout << "str1 is lower case: " << boolalpha << islower(str1[0]) << endl;
    cout << "str2 is lower case: " << boolalpha << islower(str2[0]) << endl;
    cout << "str3 is lower case: " << boolalpha << islower(str3[0]) << endl;

    return 0;
}