#include<iostream>
using namespace std;

class Add{
    int a , b;
    public:

    Add(int a , int b){
      this-> a = a;
      this-> b = b;
    }

    void print_Sum(){
        cout <<"Sum = " << a + b <<endl;
    }
};

class Sub : public Add{
    public:
    Sub(int a , int b): Add(a , b){
        cout <<"Diff = " << a - b <<endl;
    }
};

int main (){
    Sub obj_sub(30, 15);
    obj_sub.print_Sum();
}