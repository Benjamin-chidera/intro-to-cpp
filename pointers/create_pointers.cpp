#include <iostream>
using namespace std;

int main() {
    int *p_num;
    double *p_dbl;
    int num = 10;
    int *p_nums = &num;

    cout << sizeof(p_num) << endl;
    cout << sizeof(p_dbl) << endl;

    // printing out an address
    cout << "Address of num: " << p_nums << endl;


    return 0;
}