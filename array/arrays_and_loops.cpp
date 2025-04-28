#include <iostream>
using namespace std;

int main() {
    int scores [4] = {80, 70, 90, 60};

    scores[0] = 95;

    for(int i = 0; i < 4; i++)
        cout << scores[i] << endl;
        
return 0;
}