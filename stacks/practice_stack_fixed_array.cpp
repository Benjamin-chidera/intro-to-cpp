#include <iostream>
#include <stack>
using namespace std;

class Stack {
    private:
        int top;
        int arr[5];

    public:
        Stack() {
            // here we initialize the top to -1, which means the stack is empty
            top = -1;
        }

        bool isEmpty(){
            // if the top is -1, it means the stack is empty
            if (top == -1)
            {
                return true;
            }else
            {
                return false;
            }
        }

        bool isFull(){
            // if the top is 4, it means the stack is full
            if(top == 4){
                return true;
            }
            else{
                return false;
            }       
        }

        int push(int value){
            // if the stack is full, we throw an exception
            if(isFull()){
                throw "Stack is Full";
            }
            // if the stack is not full, we push the value into the array and increment the top
            else {
                // increment the top
                top++;
                // push the value into the array
                arr[top] = value;
                // return the value
                return value;
            };
        }

        int pop(){
            // if the stack is empty, we throw an exception
            if (isEmpty())
            {
               cout << "Stack is Empty" << endl;
                return -1;
            }
            // if the stack is not empty, we pop the value from the array and decrement the top
            else {
                // pop the value from the array
                int val = arr[top];
                // decrement the top
                top--;
                // return the value
                return val;
            }
            
        }

        int peek(){
            // if the stack is empty, we throw an exception
            if(isEmpty()){
                cout << "Stack is Empty" << endl;
                return -1;
            }
            else{
                return arr[top];
            }
        }

        int changeTop(int value){
            // if the stack is empty, we throw an exception
            if(isEmpty()){
                 cout << "Stack is Empty" << endl;
                return -1;
            }
            // if the stack is not empty, we change the value of the top element
            else{
                arr[top] = value;
                return value;
            }
        }

        int size(){
            // return the size of the stack
            return top + 1;
        }

        void printStack(){
            // print the stack
            for(int i = 0; i <= top; i++){
                cout << arr[i] << endl;
            }
        }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.printStack();
    cout << "Size of the stack: " << s.size() << endl;
    cout << "Top element of the stack: " << s.peek() << endl;
    s.changeTop(10);
    cout << "Top element of the stack after change: " << s.peek() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout << "Size of the stack after popping: " << s.size() << endl;
    cout << "Top element of the stack after popping: " << s.peek() << endl;

    return 0;
}