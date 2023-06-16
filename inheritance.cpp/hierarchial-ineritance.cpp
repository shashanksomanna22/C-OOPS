/*from this program u can understand hierarchial inheritance*/

#include<iostream>
using namespace std;

//single base class
class A{
    public:
    void show_a(){
        cout <<"Class A" << endl;
    }
};

//derived class 1
class B: public A{
    public:
    void show_b(){
        cout <<"Class B" << endl;
    }
};

//derived class 2
class C: public A{
    public:
    void show_c(){
        cout <<"Class C" << endl;
    }
};

int main (){
    //creating object for class B
    cout <<"Calling class from B:\n";
    B b1;
    b1.show_b();
    b1.show_a();

    //creating object for class C
    cout <<"Calling class from C:\n";
    C c1;
    c1.show_c();
    c1.show_a();
}