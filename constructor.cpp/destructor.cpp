#include <iostream>
using namespace std;

class alpha
{
    static int count ;
    public:
    alpha ()
    {
        count ++;
        cout <<"no of object " <<count << endl;
    }

    ~ alpha()
    {
        cout <<"no of object is destroyed" << count <<endl;
        count --;
    }
};

int alpha :: count;

int main ()
{
    cout <<"entered into main " <<endl;
    alpha a1, a2, a3, a4;
    {
        cout <<"enter block 1" <<endl;
        alpha a5;
    }
    {
        cout <<"enter block 2" <<endl;
        alpha a6;
    }
    cout <<"renter to main" <<endl;
    return 0;
}

