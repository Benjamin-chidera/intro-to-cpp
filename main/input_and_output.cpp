#include <iostream>
using namespace std;

int cal(int num1, int num2);

int main(){
    // ask user for input
    cout << "Enter ur first number: ";
    int num1;
    cin >> num1;

    cout << "Enter ur second number: ";
    int num2;
    cin >> num2;


    cal(num1, num2);

    return 0;
}


int cal(int num1, int num2){
    cout << "Sum is =" << num1 + num2 << endl;
    return 0;
}