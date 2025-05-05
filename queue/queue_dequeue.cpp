#include <iostream>
#include <deque>
using namespace std;

class Queue {
    private:
        deque<int> queue;
    public:
        bool isEmpty(){
            if (queue.empty())
            {
                return true;
            }else {
                return false;
            }
        }
 

};

int main(){

}