//default constructor : the constructor without parameters is called default constructor 
//for default constructor it has to be written in public
#include<iostream>
using namespace std;

class integer 
{
    int x;
    int y;

    public:
    integer ()
    {
        x = 3;
        y = 4;
    }

    void disp()
    {
        cout << "x = "<< x << endl;
        cout << "y = " << y << endl;
    }
};

int main ()
{
    integer i1;
    i1.disp();
}