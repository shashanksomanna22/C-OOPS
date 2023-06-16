/*POINTER TO DERIVED CLASS */
#include<iostream>
using namespace std;
class base{
    public:
    int b; 
    void display(){
        cout <<"b = " << b << endl;
    }
};

class derived : public base{
    public:
    int d;
    void display(){
        cout <<"d = " << d << endl;
    }
};

int main ()
{
    //creating pointer & object for-----base class-----
    base obj1;
    base *bptr;
    bptr = &obj1;
    bptr -> b = 10;
    ((derived*)bptr)->b = 10;
    bptr->display();


    //creating pointer & object for----derived---- class
    derived obj2;
    derived *dptr;
    dptr = &obj2;
    dptr -> d = 20;
    ((derived*)dptr)->d = 20;
    dptr->display();

    dptr-> b = 30;
    

}