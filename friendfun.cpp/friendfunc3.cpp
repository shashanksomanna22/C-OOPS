//one class friend function can access another classs data members or data using friend funciton

#include<iostream>
using namespace std;

class add
{
    int a , b , sum = 0;
public:
    void set_data()
    {
        cout <<"enter two number to add =" <<endl;
        cin>> a>>b;
        sum = a +b;
    }
    //declaring friend function which can give acces to another class
    friend class temp;
};

class temp
{
public:
    void disp_data(add a1)
    {
        cout<< "sum = " << a1.sum <<endl;
    }
};

int main ()
{
    add a1;

    //set data or pass the value
    a1.set_data();

    //create a object for temp class bcoz disp_data is no more global data
    temp t1;
    //display data
    t1.disp_data(a1);
}