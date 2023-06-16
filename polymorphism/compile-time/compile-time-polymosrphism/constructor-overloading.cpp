#include<iostream>
using namespace std;

class example{
    int a , b;
    public:
    
    //constructor -1
    //no - arguments
    example(){
        a = 3;
        cout <<"a = " << a << endl; 
    }
    //constructor -2
    //one - arguments
    example(int i){
        a = i;
        cout <<"a = " << a << endl; 
    }
    //constructor -3
    //two - arguments
    example(int i , int j){
        a = i;
        b = j;
        cout <<"a = " << a << endl; 
        cout <<"b = " << b << endl;
    }
    
};
int main (){
    //invoking 1- constructor
    example obj1;
    //invoking 2- constructor
    example obj2(1);
    //invoking 3- constructor
    example obj3(2,4);
}