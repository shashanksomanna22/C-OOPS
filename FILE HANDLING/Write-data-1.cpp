#include<iostream>
#include<fstream>
using namespace std;

int main(){

     //creating or opening a file using fstream
     //fstream can - read and write to file
     fstream out;
     out .open("first_file.txt",ios::out);

     if(!out){
          cout <<"Error in creating or opening a file" << endl;
          exit(1);
     }
     else{
          cout <<"\nSuccessfully opened the file!" << endl;
     }

     string name_of_the_student;
     cout <<"Enter name: ";
     cin >> name_of_the_student;
     //printing data in the file using out 
     out <<"Student name: " << name_of_the_student << endl;
     out.close();
}