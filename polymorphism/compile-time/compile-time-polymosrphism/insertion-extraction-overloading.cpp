//insertion and extraction

#include<iostream>
using namespace std;

class student{
    int age;
    string name;
    public:


    //declaration
    //extraction 
    friend istream& operator >> (istream &, student &);

    //insertion 
    friend ostream& operator << (ostream &, student &);
};

//definition

//extraction
istream &operator >>(istream & input , student & s1){
    input >> s1.name;
    input>> s1.age;
    return input;
}

//insertion 
ostream &operator << (ostream &output , student &s1){
    output << "Name = " << s1.name << endl;
    output << "Age = " << s1.age << endl;
    return output;
}

int main (){
    student s;

    cout <<"\nEnter name and age of student:\n";
    cin >> s;

    cout <<"\nStudent details are:\n";
    cout << s;
}