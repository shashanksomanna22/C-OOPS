#include<iostream>
using namespace std;

class Base{
public:
        virtual void fun(){               //virtual function
            cout <<"I am Base clas" << endl;
        }
        virtual void fun1() = 0;         //pure virtual function: has no defintion (no body)
};

class Derived: public Base{
public:
        void fun(){
            cout <<"I am Derived class"<< endl;
        }

        void fun1(){}                    //definied in derived class
};

int main (){

    //we cannot create object because of pure virtual function
    // Base B;
    // Derived D;

    //only derived class object can be created if pure virtual function of defined 
    Derived D;
}