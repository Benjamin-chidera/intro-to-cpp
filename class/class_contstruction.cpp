#include <iostream>
using namespace std;

class Car {
    public:
    int age;
    string make;
    string model;
    int year;
     Car(int a, string mo, int y){ // this is a constructor
        cout << "Car created" << endl;
        age = a;
        make = mo;
        model = "unknown";
        year = y;
     }
};

int main() {
    Car car1(2010, "Toyota", 2020); // creating an object of Car class

    cout << "Age: " << car1.age << endl;
    cout << "Make: " << car1.make << endl;
    cout << "Model: " << car1.model << endl;
    cout << "Year: " << car1.year << endl;
    return 0;
}