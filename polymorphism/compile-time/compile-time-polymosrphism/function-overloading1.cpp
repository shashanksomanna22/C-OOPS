#include<iostream>
using namespace std;

class A{
    public:

    //same function
    //1 int parameter
    void func(int i){
      cout << "value of 'i' is: " << i << endl;
    }

    //same function
    //1 double parameter
    void func(double j){
        cout <<"value of 'j' is: " << j << endl;
    }

    //same function name
    //2 int parameters
    void func(int x , int y){
        cout <<"value of 'x' is: " << x<< endl;
        cout <<"value of 'y' is: " << y << endl;
    }

};

int main (){
    //creating object for class A
    A obj1;
    //for 1 int parametr
    obj1.func(3);
    //for one double parameter
    obj1.func(9.132);
    //for 2 int parameter
    obj1.func(8,2);
}