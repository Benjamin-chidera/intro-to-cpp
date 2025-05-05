#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    // accessing the front element of the queue
    cout << "Front element of the queue: " << q.front() << endl;

    // accessing the back element of the queue
    cout << "Back element of the queue: " << q.back() << endl;

    // changing the front element of the queue
    q.front() = 40;

    // changing the back element of the queue
    q.back() = 50;

     // accessing the front element of the queue
    cout << "Front element of the queue: " << q.front() << endl;

    // accessing the back element of the queue
    cout << "Back element of the queue: " << q.back() << endl;


    // removing the front element of the queue
    q.pop();

    // accessing the front element of the queue
    cout << "Front element of the queue: " << q.front() << endl;

    // accessing the back element of the queue
    cout << "Back element of the queue: " << q.back() << endl;

    // getting the size of the queue
    cout << "Size of the queue: " << q.size() << endl;

    // checking if the queue is empty or not
    cout << "Is the queue empty? " << boolalpha << q.empty() << endl;

    return 0;
}