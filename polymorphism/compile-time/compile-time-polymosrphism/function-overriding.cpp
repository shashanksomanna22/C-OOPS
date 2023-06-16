#include<iostream>
using namespace std;

class base
{
    public:
    void show(){
        cout <<"BASE - CLASS\n";
    }
};

class derived : public base 
{
    public:
    void show (){
        cout <<"DERIVED - CLASS\n";

        //this can aslo be done to invoke base class function
        base :: show();
    }
};

int main ()
{
    derived d1 , d2;
    //it will invoke derived class
    d1.show();

    //it will invoke base class
    d1.base :: show();
}