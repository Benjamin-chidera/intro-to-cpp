#include <iostream>
using namespace std;

class Car {
    public:
    int tires;
    int doors;
    string color;
    bool is_running;
};

int main(){
    Car my_car;

    // assign values to the member variables
    my_car.tires = 4;
    my_car.doors = 4;
    my_car.color = "red";
    my_car.is_running = true;

    // print the attributes of the car
    cout << "Your car has " << my_car.tires << " tires." << endl;
    cout << "Your car has " << my_car.doors << " doors." << endl;
    cout << "Your car is " << my_car.color << "." << endl;

    if(my_car.is_running){
        cout << "Your car is running." << endl;
    }

    return 0;
}