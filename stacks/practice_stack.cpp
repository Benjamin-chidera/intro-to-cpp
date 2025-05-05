#include <iostream>
#include <stack>
using namespace std;

class Stack {
    stack<int> myStack;

    public:
    // this is for pushing
        void push(int value){
            myStack.push(value);
        };

    // this is for checking if stack is empty
        bool isEmpty(){
            return myStack.empty();
        };

    // this is for checking if stack is full
        bool isFull(){
            return false;
        };

    // this is for popping
        int pop(){
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
            }
            else {
               int topVal = myStack.top();
               myStack.pop();
                return topVal;
            }
        }

    // this is for accessing the top element of the stack
        int peek(){
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            else {
                return myStack.top();
            }
        }
    
    // this is for printing the stack
        void printStack() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            stack<int> temp = myStack;
            while (!temp.empty()) {
                cout << temp.top() << " ";
                temp.pop();
            }
            cout << endl;
        }
}

};


int main(){
    Stack s;

    int choice, value;

    do {
        cout<<"1. Push" <<endl;
        cout<<"2. Pop" <<endl;
        cout<<"3. Peek" <<endl;
        cout<<"4. Print Stack" <<endl;
        cout<<"5. Exit" <<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter value to push: ";
            cin >> value;
            s.push(value);
            break;

        case 2:
            value = s.pop();
            cout<<"Popped value: "<<value<<endl;
            break;

        case 3:
            value = s.peek();
            cout<<"Top value: "<<value<<endl;
            break;

        case 4:
            s.printStack();
            break;
        
        default:
            break;
        }
        
    } while (choice != 0);

    return 0;
    
}