#include<iostream>
using namespace std;

class base1{
    public:
    void greet(){
        cout <<"how are you ?" << endl;
    }
};

class base2{
    public:
    void greet(){
        cout <<"welcome home!!"<< endl;
    }
};

class derived : public base1 , public base2{
    public:
    void display(){
    base1::greet();
    base2::greet();
    }
};

int main (){
    derived obj1;
    obj1.display();
    obj1.base1::greet();
}