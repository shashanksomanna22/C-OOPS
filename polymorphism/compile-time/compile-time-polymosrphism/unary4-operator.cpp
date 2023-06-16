/*PREFIX increement and decreement*/

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
    void operator ++(){
        a++;
    }

    //decreement overloading
    void operator --(){
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

    ++obj;
    cout <<"\nIncreemented overloading:\n";
    obj.show();

    --obj;
    cout <<"\ndecreemented overloading:\n";
    obj.show();

}