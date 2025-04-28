
#include <iostream>
using namespace std;

// Switch statement example
int main() {
    int choice;
    cout << "Enter your choice (1-3): ";

    cin >> choice;

    switch (choice)
    {
    case 1:
        /* code */
        cout << "You chose option 1" << endl;
        break;

    case 2:
        /* code */
        cout << "You chose option 2" << endl;
        break;

    case 3:
        /* code */
        cout << "You chose option 3" << endl;
        break;
    
    default:
        cout << "Invalid choice" << endl;
        break;
    }
    
    
    }