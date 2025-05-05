#include <iostream>
#include <stack>
using namespace std;

class Stack {
    private:
        int top;
        int arr[5];

    public:
        Stack() {
            top = -1;
            // for (int i = 0; i < 5; i++){
            //     arr[i] = 0;
            // }
        }
        bool isEmpty(){
            if(top == -1){
                return true;
            }else{
                return false;
            }
        }

        bool isFull(){
            if(top == 4){
                return true;
            }else{
                return false;
            }
        }

        void push(int value){
            if(isFull()){
                cout << "Stack is full" << endl;
            }else{
                top++;
                arr[top] = value;
            }
        }

        int pop(){
            if (isEmpty())
            {
               cout << "Stack is empty" << endl;
               return -1;
            }else {
                int value = arr[top];
                top--;
                return value;
            }
            
        }

        int count(){
            return top+1;
        }

        int peek(int pos){
            if (isEmpty()){
                cout << "Stack is empty" << endl;
                return -1;
            
            }else {
                return arr[pos];
            }
        }

        void change(int pos, int value){
             if (isEmpty()){
                cout << "Stack is empty" << endl;
                
            
            }else {
                arr[pos] = value;
                cout << "Value changed" << endl;
            }
        }

        void display(){
            if (isEmpty()){
                cout << "Stack is empty" << endl;
            }else {
                for (int i = 4; i >= 0; i-- ){
                    cout << arr[i] << endl;
                }
           
            }
        }

};

int main() {
    Stack my_stack;
    int choice, value, pos;

    do
    {
       cout << "Welcome to Stack Operations" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Count" << endl;
        cout << "4. Peek" << endl;
        cout << "5. Change" << endl;
        cout << "6. Display" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice){
            case 1:
                cout << "Enter value to push:";
                cin >> value;
                my_stack.push(value);
                break;
            case 2:
                value = my_stack.pop();
                cout << "Popped value: " << value << endl;
                break;
            case 3:
                cout << "Count: " << my_stack.count() << endl;
                break;
            case 4:
                cout << "Please enter the position to peek: ";
                cin >> pos;
                value = my_stack.peek(pos);
                cout << "Value at position " << pos << " is: " << value << endl;
                break;
            case 5:
                cout << "Please enter the position to change: ";
                cin >> pos;
                cout << "Please enter the new value: ";
                cin >> value;
                my_stack.change(pos, value);
                break;
            case 6:
                my_stack.display();
                break;
            case 0:
                cout << "Closing program...";
                break;

        }


    } while (choice != 0);
    
}