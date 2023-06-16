//parameterized constructor : the constructor having parameter

#include<iostream>
using namespace std;

class integer
{
    int x ;
    int y;

    public:
    //defining constructor inside the class 
    //parameterized constructor
    integer (int i , int j)
    {
      x = i;
      y = j;
    }

    void disp()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};
//defining constructor outside the class and passing the arguments same
integer :: integer (int a , int d)
{
    cout <<"hi";
}


int main ()
{
    integer i1(3,4);
    integer i2(4,8);

    cout << "i1 obejct :" <<endl;
    i1.disp();
    cout << "i2 object :" << endl;
    i2.disp();
}