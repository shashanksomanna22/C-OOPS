/*unary operator*/

#include<iostream>
using namespace std;

class distance1 {
    int feet , inch;
    public:
    
    //constructor
    distance1 (int feet, int inch){
        this-> feet = feet;
        this-> inch = inch;
    }
    
    //operator overloading
    void operator --(int){
        feet--;
        inch--;
        cout <<feet <<"'" << inch << endl;
    }
};

int main (){

    distance1 d(5,8);
    d--;
    return 0;
}