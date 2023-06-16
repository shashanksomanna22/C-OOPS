#include<iostream>
#include<fstream>
using namespace std;

int main(){

    //creating a file -- out will act as link to file 
    ofstream out("thirdfile.txt", ios:: out);
    string name;

    cout<<"Enter name: ";
    cin >> name;

    //printing the name in file
    out << "My name is: " << name  << endl;
    out <<"Bhishu bsdk" << endl;
    out.close();
}
