#include<iostream>
#include<fstream>
using namespace std;

int main(){

    //creating or opening a file
    ofstream out;
    out.open("second_file.txt", ios::out);
    string id , name;
    cout <<"Enter id: ";
    cin >> id;

    cout <<"Enter name: ";
    cin >> name;

    //printing the details in file
    out<<"Id: " << id << endl;
    out <<"Name: " << name << endl;

    out.close();
}