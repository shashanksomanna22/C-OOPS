/*friend function: non member of a class ---unary
only one argument can be passed in operator function*/


#include<iostream>
using namespace std;

class unary {
    int a ;
    public:
    unary(int a){
        this-> a = a;
    }
    void show(){
        cout <<"Value of 'a' = " << a << endl;
    }

    //friend function operator overloading declaration 
    //pre increement and pre decreement 
    friend void operator ++(unary &);    //increemnet overloading
    friend void operator --(unary &);    //decreement overloading
};

//increement overloading definiton
void operator ++(unary &obj){
    obj.a = ++obj.a;
}

//decreement overloading definition
void operator --(unary &obj){
    obj.a = --obj.a;
}



int main (){
    cout <<"\nBefore increement and decreement:\n";
    unary obj(5);
    obj.show();
    
    cout<<"\nAfter increment:\n";
    ++obj;
    obj.show();

    cout <<"\nAfter decreement:\n";
    --obj;
    obj.show();
}