#include <iostream>
using namespace std;

class MyClass {
  private:   // Private access specifier
    int y;   // Private attribute
  public:    // Public access specifier
    int x;   // Public attribute
    void setX(int value) {   // Public method to set x
      y = value;
    }
    int getX() {   // Public method to get x
      return y;
    }


};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (public)
//   myObj.y = 50;  // Not allowed (private)
myObj.setX(50);  // Allowed (public)
myObj.getX();  // Not allowed (private)

  cout << "y = " << myObj.getX() << endl;  // Allowed (public)
//   cout << "y = " << myObj.y << endl;  // Not allowed (private)

  return 0;
}