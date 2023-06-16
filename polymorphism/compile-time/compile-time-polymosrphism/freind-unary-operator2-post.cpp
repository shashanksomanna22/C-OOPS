/*post increement and decreemrnt*/

#include<iostream>
using namespace std;

class unary {
    int a;
    public:
    unary(int a){
        this-> a = a;
    }
    void show(){
        cout <<"Value of 'a' = " << a << endl;
    }

    //post increement and decreement

    //declaration 
    friend void operator ++(unary &, int);
    friend void operator --(unary &,int);
};

//definition
void operator ++(unary &obj, int ){
    obj.a = obj.a++;
}

void operator --(unary &obj,int ){
    obj.a--;
}

int main (){
    cout <<"\nBefore increement and decreement:\n";
    unary obj(5);
    obj.show();

    cout <<"\nAfter increement:\n";
    obj++;
    obj.show();

    cout <<"\nAfter decreement:\n";
    obj--;
    obj.show();

}