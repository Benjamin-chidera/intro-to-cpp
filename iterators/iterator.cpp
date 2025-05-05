#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {1,3,4,5,6,7,8,9};
    vector<int>::iterator it;

    for (it = v.begin(); it != v.end(); ++it){
        cout << *it << endl;
    }
}