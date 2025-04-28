 #include <iostream>
 using namespace std;

 int main() {
     int x = 5;
     cout << "The value of x is: " << x << endl;
     cout << "The address of x is: " << &x << endl;

     int *ptr = &x; // pointer to x
     cout << "The value of x through pointer is: " << *ptr << endl;
     cout << "The address of x through pointer is: " << ptr << endl;

     *ptr = 10; // changing the value of x through pointer
     cout << "The new value of x is: " << x << endl;
     cout << "The value of x through pointer is: " << *ptr << endl;
     return 0;
 }