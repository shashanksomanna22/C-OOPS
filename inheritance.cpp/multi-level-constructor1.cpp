//----multi-level CONSTRUCTOR ----

#include<iostream>
using namespace std;

class A{
    public:
     //constructor
     A(){
        cout <<"Base class A constructor\n";
    }
};

class B: public A{
    public:
    //constructor
    B(){
        cout <<"Intermediate class B constructor\n";
    }
};

class C : public B{
    public:
    //constructor
    C(){
        cout <<"Child class C constructor\n";
    }
};

int main (){
    C obj;
    return 0;
}