#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int &my_x = x;

    cout << "The value of x is: " << x << endl; 
    cout << "The address of x is: " << &x << endl;
    cout << "The value of my_x is: " << my_x << endl;
    cout << "The address of my_x is: " << &my_x << endl;

    my_x = 10;
    cout << "The new value of x is: " << x << endl;
    cout << "The new value of my_x is: " << my_x << endl;
     cout << "The address of my_x is: " << &my_x << endl;  


   

    return 0;
}
