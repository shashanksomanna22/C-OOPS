#include<iostream>
using namespace std;
//note: if i want to point pointer to a data member or memberfunction it must be declared public 
class A{
public:
        int a;
        void get_data(){
            cout <<"Enter a = " ;
            cin >> a;
        }
        void display_a(){
            cout <<"Value of 'a' = " << a << endl << endl;
        }
};

int main (){
    A ob1; //creating object for class A
    A *ptr; //class A pointer 
    ptr = &ob1; //pointer ptr pointing to object ob1
    cout <<"\nAddres of pointer 'ptr' = " <<ptr << endl;

    ob1.get_data();
    ob1.display_a();
    //or
    ptr->get_data();
    ptr->display_a();
    //or 
    ob1.a = 2;
    ob1.display_a();
    //or pointer
    int A::*dp = &A ::a;
    ob1.*dp = 20;
    ob1.display_a();
    cout <<"Address of pointer 'dp'= "<<dp << endl;
}