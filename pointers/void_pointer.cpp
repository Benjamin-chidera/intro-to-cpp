 #include <iostream>
 using namespace std;

 void print_num(int *num_ptr){
     cout << "The value of num is: " << *num_ptr << endl;
 }

 void print_char(char *char_ptr){
     cout << "The value of char is: " << *char_ptr << endl;
 }

 
 void print(void *ptr, char type){
    switch(type){
        case 'i': // handle int pointer
            cout << "The value of int is: " << *(int*)ptr << endl;
            break;
        case 'c': // handle char pointer
            cout << "The value of char is: " << *(char*)ptr << endl;
            break;
    }
 }



 int main(){
    int num = 10;
    char letter = 'A';
    // print_num(&num);

    // print_char(&letter);

    // print(&num, 'i');
    print(&letter, 'c');
    return 0;
 }