#include <iostream>
using namespace std;


int main(){
    char name[] = {'H', 'e', 'l', 'l', 'o', 's', '\0'};

    // for (auto c: name){
    //     cout << c;
    // }
    cout << sizeof(name) / sizeof(char) << endl;
    cout << sizeof(name) << endl;

    cout << name << endl; 
}  