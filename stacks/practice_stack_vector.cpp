#include <iostream>
#include <vector>
using namespace std;

class Stack {
    private:
        vector<int> stack;
    
    public:

        bool isEmpty(){
            if(stack.empty()){
                return true;
            }
            else {
                return false;
            }
        }

        void push(int value){
            stack.push_back(value);
        }

        void pop(){
            if(isEmpty()){
                cout << "Stack is empty" << endl;
            }else {
                stack.pop_back();
            }
        }

        void changeTop(int value){
            if(isEmpty()){
                cout << "Stack is empty" << endl;
            }else {
                stack.back() = value;
                cout << "Top value changed to " << value << endl;

            }
        }

        int peek(){
            if(isEmpty()){
                cout << "Stack is empty" << endl;
            }else {
               return stack.back();
            }
            
        }

        int size(){
            return stack.size();
        }

        void display(){
            for(int i = 0; i < size(); ++i){
                cout << stack[i] << endl;
            }
        }
};

int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.changeTop(40);

    s.display();

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    s.pop();

    s.display();

    cout << "Size of stack: " << s.size() << endl;

    return 0;
}