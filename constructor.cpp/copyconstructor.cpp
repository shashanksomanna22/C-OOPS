//copy constructor 

#include<iostream>
using namespace std;

class integer 
{
    int x; 
    int y;

    public:
    integer (int i, int j)
    {
        x = i;
        y = j;
    }

    integer (integer &s)
    {
        x = s.x;
        y = s.y;
    }

    void disp()
    {
        cout << "X = " << x << endl;
        cout << "Y = " << y << endl;
    }
};

int main ()
{
    integer i1(33,44);
    integer i2(i1);
    cout <<"copy constructor is :" << endl;
    i2.disp();


}
