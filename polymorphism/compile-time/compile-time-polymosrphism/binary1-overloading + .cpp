#include<iostream>
using namespace std;

class binary{
    int a , b , c;
    public:
    // void get_data(int a , int b , int c){
    //     this -> a = a;
    //     this -> b = b;
    //     this -> c = c;
    // }
    binary(){
        a = 2;
    }
    void show(){
        cout <<"\na = " << a << "\nb = " << b << "\nc = " << c << endl;
    }

    //definiton
    //passing only one argument
    binary operator +(binary &);
};

    binary binary :: operator+(binary &obj2){
        binary obj3;
        obj3.a = a + obj2.a;
        // obj3.b = b + obj2.b;
        // obj3.c = c + obj2.c;
        return obj3;
}

    int main (){
        binary obj1, obj2, obj3;
        // obj1.get_data(5,4,2);
        // obj2.get_data(5,4,2);
        //adding two objects
        obj3 = obj1 + obj2;
        obj3.show();
    
}