#include<iostream>
using namespace std;

class example{
    int a , b;
    public:
    void show(){
        //printing the address of the object
        cout <<"Object address is = " << this << endl;

        //printing the address of the data member
        cout <<"Address of a = " << this->a << endl;
        cout <<"Address of b = " << this->b << endl;
    }
};

int main (){
    example obj1;
    obj1.show();
    return 0;
}