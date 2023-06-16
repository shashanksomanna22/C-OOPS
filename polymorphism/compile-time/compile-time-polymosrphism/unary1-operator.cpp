//unary operator : no arguments are passwd

#include<iostream>
using namespace std;

class example{
    int a , b;
    public:
    void get_data(int i, int j){
        a = i;
        b = j;
    }

    void display(){
        cout <<"Value of 'a' = " << a << endl;
        cout <<"Value of 'b' = " << b << endl;
    }

    //declaration of opeatior overloading
    //operator is (-) negative operator (changing a value from positive to negative)
    void operator -();
};

//definition of negative operator overloading
void example :: operator-(){
    a = -a;
    b = -b;
}

int main (){
    //creating objects
    example obj;
    obj.get_data(8,7);
    cout <<"\nBefore overloading:\n";
    obj.display();

    -obj;
    cout <<"\nAfter overloading: \n";
    obj.display();
}