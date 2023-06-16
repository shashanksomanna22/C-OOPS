/*POSTFIX increement and decreement----------to make understand compiler its postfix , 
we declare int datatypeas the argument in the operatoe overloading function*/

#include<iostream>
using namespace std;

class unary{
    int a;
    public:
    //defualt contsructor
    unary(){
        a = 0;
    }

    //increement overloading
    void operator ++(int){
        a++;
    }

    //decreement overloading
    void operator --(int){
        a--;
    }

    //displaying 
    void show(){
        cout <<"value of 'a' = " << a << endl;
    }
};

int main (){
    //creating object
    unary obj;
    cout <<"\nInitial value:\n";
    obj.show();

    obj++;
    cout <<"\nIncreemented overloading:\n";
    obj.show();

    obj--;
    cout <<"\ndecreemented overloading:\n";
    obj.show();

}