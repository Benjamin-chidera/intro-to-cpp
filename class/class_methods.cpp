#include <iostream>
using namespace std;

class Car {
    public:
     int tires;
    int doors;
    string color;
    bool is_running;

    void start(){
        is_running = true;
        cout << "The car is started." << endl;
    }

    void my_car(){
        tires = 4;
        doors = 4;
        color = "red";
    }

    void display_car(){
        cout << "Tires: " << tires << endl;
        cout << "Doors: " << doors << endl;
        cout << "Color: " << color << endl;
        if(is_running)
            cout << "The car is running." << endl;
        else
            cout << "The car is stopped." << endl;
    }

    void stop(){
        is_running = false;
        cout << "The car is stopped." << endl;
    }
};

int main(){
    Car my_car;
    my_car.my_car();
    my_car.display_car();
    
}