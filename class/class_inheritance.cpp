#include <iostream>
using namespace std;

class Vehicle {
    public:
    string brand;
    int year;
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

class Car: public Vehicle {
    public:
    string model;

    void display() {
        cout << "Model: " << model << endl;
        Vehicle::display();
    }
};

int main(){
    Car myCar;
    myCar.brand = "Toyota";
    myCar.year = 2020;
    myCar.model = "Camry";
    myCar.display();
    return 0;
}