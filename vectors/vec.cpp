#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1 = {1,2,3};

    // cout << v1[0] << endl; // Output: 1
    // cout << v1.front() << endl; // Output: 1
    // cout << v1.back() << endl; // Output: 3

    // inserting at the beginning
    v1.insert(v1.begin(), 0);
    cout << v1.front() << endl; // Output: 0

    // erasing the first element
    v1.erase(v1.begin());
    cout << v1.front() << endl; // Output: 2
for (int i = 0; i < v1.size(); ++i){
    cout << v1[i] << endl;
}


    return 0;
}