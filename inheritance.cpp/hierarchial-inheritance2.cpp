#include<iostream>
using namespace std;

class A{
    public:
    int a , b;
    void get_data(){
        cout <<"Enter two number: ";
        cin >> a >> b;
    }
};

class B: public A{
    int product;
    public:
    void print_data_b(){
        product = a * b;
        cout <<"Product = " << product << endl;
    }
};

class C: public A{
    int sum ;
    public:
    void print_data_c(){
        sum = a + b;
        cout <<"Sum = " << sum << endl;
    }
};

int main(){
    B obj1;
    obj1.get_data();
    obj1.print_data_b();

    C obj2;
    obj2.get_data();
    obj2.print_data_c();
}