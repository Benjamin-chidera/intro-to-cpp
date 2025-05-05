#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> cars;

    // add elements to the stack
    cars.push("BMW");
    cars.push("Toyota");
    cars.push("Honda");

    // accessing the top element of the stack
    cout << "Top old: " << cars.top() << endl;

    // changing the top element of the stack
    cars.top() = "Tesla";

    cout << "Top new old: " << cars.top() << endl;

    // popping elements from the stack
    cars.pop(); // this will pop out the last element added to the stack

    cout << "Top new: " << cars.top() << endl;

    // get the size of the stack
    cout << "Size: " << cars.size() << endl;

    // check if the stack is empty

    cout << "Empty: " << boolalpha << cars.empty() << endl;

    

    return 0;





}