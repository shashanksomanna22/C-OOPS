#include<iostream>
using namespace std;

class example{
    int a, b;
    public:
    void get_data(int a, int b){
        //this pointer a & b represents class data memebr and arguments are local variables.
        this->a = a;
        this->b = b;
        (*this).a = a;
    }
    void show(){
        cout <<"a = " << a << endl << "b =" << b ;
    }
};
int main (){
    example obj1;
    obj1.get_data(5,3);
    obj1.show();
}