//friend function : friend function is used to acces the private data member sof the class 
#include <iostream>
using namespace std;

class add
{
    int a, b;
    int sum;
    public:
    void set_data(int i , int j)
    {
       a = i;
       b = j;
       sum = a + b;
    }

    //declaring freiend function 
    friend void disp_data(add);

};

//defining the friend function
void disp_data(add a1)
{
    cout << "sum = " << a1.sum << endl;
}

int main ()
{
    add a1;

    //calling the setdata
    a1.set_data(20,20);

    //displaying the data 
    disp_data(a1);
}