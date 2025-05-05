#include <iostream>
#include <vector>
using namespace std;

class Queue {
private:
    vector<int> queue;

public:
    bool isEmpty() {
        return queue.empty();
    }

    void enqueue(int value) {
        queue.push_back(value); // Add to the end
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            queue.erase(queue.begin()); // Remove from the front (O(n))
        }
    }

    int front() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        } else {
            return queue.front();
        }
    }

    int size() {
        return queue.size();
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            for (int val : queue) {
                cout << val << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();  // Output: 10 20 30

    q.dequeue();  // Removes 10

    q.display();  // Output: 20 30

    cout << "Front of queue: " << q.front() << endl; // Output: 20

    return 0;
}
