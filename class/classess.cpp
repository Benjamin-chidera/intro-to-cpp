#include <iostream>
using namespace std;

class Employee {
    public:
        string name;
        int age;
        double salary;
        string company;

        void registerEmployee() {
            name = "John";
            age = 25;
            salary = 50000;
            company = "ABC";
        }

        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Salary: " << salary << endl;
            cout << "Company: " << company << endl;
        }

};

int main(){
    Employee emp;
    emp.registerEmployee();
    emp.display();
    return 0;
}