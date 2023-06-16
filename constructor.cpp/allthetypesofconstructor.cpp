#include <iostream>
using namespace std;

class integer
{
    int x ;
    int y ;

    public :
    //default constructor
    integer ()
    {
        x = 0;
        y = 0;
    }

    //parameterized constructor
    integer (int i , int j)
    {
        x = i;
        y = j;
    }

    //copy constructor 
    integer (integer &s)
    {
        x = s.x;
        y = s.y;
    }

    //displaying data
    void disp()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main ()
{
    integer i1;
    integer i2(3,4);
    integer i3(i2);
    i3 = i2; //overloading assignment operator

    cout << "defualt constructor :" << endl;
    i1.disp();
    cout << "parameterized constructor :" << endl;
    i2.disp();
    cout << "copy constructor :" << endl;
    i3.disp();
}