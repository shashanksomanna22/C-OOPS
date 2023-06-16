#include<iostream>
using namespace std;

class student {
    int rollno;
    string name;
    static int count ;
    public:
            student(){
                count ++;
                cout <<"\nConstructor called :" << count << endl;
                cout <<"Enter roll_no: ";
                cin >> rollno;
                cout <<"Enter name: ";
                cin>> name;
                cout <<"\nStudent details are:";
                cout <<"\nRoll_no: " << rollno << endl;
                cout <<"Name: " << name << endl;
            }

            //destructor
            ~student(){
                cout <<"Destructor called" << count << endl;
                --count;
            }
};

int student :: count ;

int main(){
    int size;
    cout <<"Enter size: ";
    cin >> size;
    student *ptr = new student[size];
    delete [] ptr;

}