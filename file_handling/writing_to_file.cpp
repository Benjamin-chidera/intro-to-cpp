#include <iostream>
#include <fstream>

using namespace std;

// this function will write to a file
void writeTOFile() {

   ofstream myFile;
   myFile.open("myfile.txt", ios::out); // this is used to open a file in write mode

   if (myFile.is_open())
   {
    cout << "File opened successfully" << endl;
    myFile << "This is a test file" << endl;
    myFile.close();
   }
   else {
      cout << "Error opening file" << endl;
   }
}

// this function will append to a file
void appendToFile() {
   ofstream myFile;
   myFile.open("myfile.txt", ios::app); // this is used to open a file in append mode

   if(myFile.is_open()){
      myFile << "This is another text to append to the file" << endl;
      myFile.close();
   }
   else {
      cout << "Error opening file" << endl;
   }
}

// this function will read from a file
void readFromFile() {
   ifstream myFile;
   myFile.open("myfile.txt", ios::in); // this is used to open a file in read mode

   if(myFile.is_open()){
      string text;
      while(getline(myFile, text)){
         cout << text << endl;
      }
      myFile.close();
   }else{
      cout << "Error opening file" << endl;
   }
}


int main() {
   //  writeTOFile();
   //  appendToFile();
   readFromFile();
    return 0;
}