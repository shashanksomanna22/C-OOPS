#include<iostream>
using namespace std;

class base{
    public:
    int a;
    //overriding from base class
    void display(){
        cout <<"a = " << a << endl;
    }
};

class derived: public base{
    int b;
    public:
    //overriding dispaly function from base class
    void display(){
        cout << "a = " << a << endl;
        cout << "b = "<< b << endl;
    }
};

int main (){
    derived obj1;
    obj1.display();
}