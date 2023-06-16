//friend operator overloading

#include<iostream>
using namespace std;

class example{
    int a , b;
    public: void get_data(int i, int j){
            a = i;
            b = j;
    }

    void display(){
        cout <<"a = " << a << endl;
        cout <<"b = " << b << endl;
    }

    friend void operator -(example&); // declaration
};

//defining operator
void operator-(example& e){
    e.a = -e.a;
    e.b = -e.b;
}

int main (){
    example e1;
    e1.get_data(10,20);
    e1.display();
    -e1;
    e1.display();
}