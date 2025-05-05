#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);  // Enqueue
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl; // 10
    cout << "Back: " << q.back() << endl;   // 30

    q.pop(); // Dequeue (removes 10)

    cout << "Front after pop: " << q.front() << endl; // 20

    cout << "Queue size: " << q.size() << endl; // 2

    return 0;
}
