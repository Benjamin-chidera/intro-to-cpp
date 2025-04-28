#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = " ";
    string str2 = "hello";
    string str3 = "";

    cout << "str1 is blank: " << isblank(str1[0]) << endl;
    cout << "str2 is blank: " << isblank(str2[0]) << endl;
    cout << "str3 is blank: " << isblank(str3[0]) << endl;

    return 0;
}