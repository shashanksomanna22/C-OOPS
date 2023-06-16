#include<iostream>
using namespace std;

class Base{
    public:
            void fun(){
                cout <<"I am Base (fun) class" << endl;
            }
            
            //virtual function
            virtual void fun1(){
                cout <<"I am Base (fun1) class" << endl;
            }
};

class Derived : public Base{
    public:
            void fun(){
                cout <<"I am Derived (fun) class" << endl;
            }
            void fun1(){
                cout <<"I am Derived (fun1) class" << endl;
            }
};

int main (){

    Derived D; //creating object for derived
    Base &B = D;    //creating object for base class and base object is refernce to derived object
    B.fun(); // it will call base class function

    B.fun1(); //derived class fucntion will be called 
    
}