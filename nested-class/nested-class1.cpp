#include<iostream>
using namespace std;

class A{
    int a;
    public:
           void get_data_a(int i){
             a = i;
             cout <<"a = " << a << endl;
           }
           
           //another class (nested class)
           class B{
            int b;
            public:
                  void get_data_b(int j){
                    b = j;
                    cout <<"b = " << b << endl;
                  }
           };
};

int main (){
    //creating object for class -A
    A obj1;
    obj1.get_data_a(2);

    //creating object for class -B
    A :: B obj2;
    obj2.get_data_b(4);
}